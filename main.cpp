#include <iostream>
#include "Menu.hpp"

int main()
{
    Menu menu;

    menu.AddButton("God Mode", []()
    {
        std::cout << "God Mode Enabled\n";
    });

    menu.AddButton("Infinite Ammo", []()
    {
        std::cout << "Infinite Ammo Enabled\n";
    });

    menu.AddButton("Teleport", []()
    {
        std::cout << "Teleport\n";
    });

    menu.Draw();

    menu.Select(0);
    menu.Select(1);

    return 0;
}
