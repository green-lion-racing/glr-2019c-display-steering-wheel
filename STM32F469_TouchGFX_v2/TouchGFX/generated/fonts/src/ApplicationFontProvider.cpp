/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <fonts/ApplicationFontProvider.hpp>
#include <touchgfx/InternalFlashFont.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern touchgfx::InternalFlashFont& getFont_verdana_25_4bpp();
extern touchgfx::InternalFlashFont& getFont_verdana_40_4bpp();
extern touchgfx::InternalFlashFont& getFont_verdana_10_4bpp();
extern touchgfx::InternalFlashFont& getFont_consola_100_4bpp();
extern touchgfx::InternalFlashFont& getFont_consola_150_4bpp();

touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId fontId)
{
    switch (fontId)
    {
    case Typography::DEFAULT:
        return &(getFont_verdana_25_4bpp());
    case Typography::LARGE:
        return &(getFont_verdana_40_4bpp());
    case Typography::SMALL:
        return &(getFont_verdana_10_4bpp());
    case Typography::TYPOGRAPHY_00:
        return &(getFont_consola_100_4bpp());
    case Typography::TYPOGRAPHY_01:
        return &(getFont_consola_150_4bpp());
    default:
        return 0;
    }
}
