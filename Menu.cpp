#include "Menu.hpp"
#include <iostream>

void Menu::AddButton(
    const std::string& text,
    std::function<void()> callback)
{
    m_Items.emplace_back(text, callback);
}

void Menu::Draw()
{
    std::cout << "===== Lua Menu =====\n";

    for (size_t i = 0; i < m_Items.size(); i++)
    {
        std::cout
            << i
            << " - "
            << m_Items[i].GetText()
            << '\n';
    }
}

void Menu::Select(int index)
{
    if(index >= 0 && index < m_Items.size())
        m_Items[index].Execute();
}
