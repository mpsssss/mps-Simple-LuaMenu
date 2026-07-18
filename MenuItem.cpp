#include "MenuItem.hpp"

MenuItem::MenuItem(
    std::string text,
    std::function<void()> callback)
    :
    m_Text(std::move(text)),
    m_Callback(std::move(callback))
{
}

void MenuItem::Execute()
{
    if(m_Callback)
        m_Callback();
}

const std::string& MenuItem::GetText() const
{
    return m_Text;
}
