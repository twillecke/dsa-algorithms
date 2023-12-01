#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <thread>
#include <chrono>

using namespace std;

#include <iostream>

class Pixel
{
public:
    int x, y;
    char symbol;
    Pixel(int x, int y)
    {
        this->x = x;
        this->y = y;
        this->symbol = '-';
    }
    Pixel() // Default constructor
    {
        this->x = 0;
        this->y = 0;
        this->symbol = '-';
    }
};

class Canvas
{
public:
    int width, height;
    Pixel **pixels;

    Canvas(int width, int height)
        : width(width), height(height)
    {
        this->pixels = new Pixel *[height];
        for (int i = 0; i < height; i++)
        {
            this->pixels[i] = new Pixel[width];
        }
    }

    ~Canvas()
    {
        for (int i = 0; i < height; ++i)
        {
            delete[] pixels[i];
        }
        delete[] pixels;
    }

    void clearScreen()
    {
        std::cout << "\033[2J\033[H"; // ANSI escape code for clear screen
    }

    void updateScreen()
    {
        clearScreen();
        printScreen();
    }

    void printScreen()
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                std::cout << pixels[i][j].symbol << " ";
            }
            std::cout << std::endl;
        }
    }
};

void updateLoop(Canvas &c, int updateRate)
{
    while (true)
    {
        c.updateScreen();
        std::this_thread::sleep_for(std::chrono::seconds(updateRate));
    }
}

int main()
{
    Canvas c(16, 9);

    // Create a thread for the update loop
    std::thread updateThread(updateLoop, std::ref(c), 1);

    // Main loop
    while (true)
    {
        int x = rand() % c.width;
        int y = rand() % c.height;
        c.pixels[y][x].symbol = 'X';
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // Optionally, wait for the updateThread to finish (e.g., when the program exits)
    updateThread.join();

    return 0;
}
