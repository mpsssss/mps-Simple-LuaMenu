#pragma once

#include <vector>
#include "MenuItem.hpp"

class Menu
{
public:
    void AddButton(
        const std::string& text,
        std::function<void()> callback);

    void Draw();

    void Select(int index);

private:
    std::vector<MenuItem> m_Items;
};
