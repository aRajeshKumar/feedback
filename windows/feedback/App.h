#pragma once

#include "App.xaml.g.h"

namespace winrt::feedback::implementation
{
    struct App : AppT<App>
    {
        App() noexcept;
    };
} // namespace winrt::feedback::implementation


