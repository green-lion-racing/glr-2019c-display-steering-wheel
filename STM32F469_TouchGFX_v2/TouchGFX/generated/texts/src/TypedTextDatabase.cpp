/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <touchgfx/InternalFlashFont.hpp>
#include <touchgfx/TypedText.hpp>
#include <texts/TypedTextDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern touchgfx::InternalFlashFont& getFont_verdana_20_4bpp();
extern touchgfx::InternalFlashFont& getFont_verdana_40_4bpp();
extern touchgfx::InternalFlashFont& getFont_verdana_10_4bpp();
extern touchgfx::InternalFlashFont& getFont_verdana_100_4bpp();

const touchgfx::Font* const _fonts[] =
{
    &(getFont_verdana_20_4bpp()),
    &(getFont_verdana_40_4bpp()),
    &(getFont_verdana_10_4bpp()),
    &(getFont_verdana_100_4bpp())
};

TEXT_LOCATION_FLASH_PRAGMA
const touchgfx::TypedText::TypedTextData typedText_database_DEFAULT[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR }
};


TEXT_LOCATION_FLASH_PRAGMA
const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    typedText_database_DEFAULT
};

namespace TypedTextDatabase
{
const touchgfx::TypedText::TypedTextData* getInstance(touchgfx::LanguageId id)
{
    return typedTextDatabaseArray[id];
}

uint16_t getInstanceSize()
{
    return sizeof(typedText_database_DEFAULT) / sizeof(touchgfx::TypedText::TypedTextData);
}

const touchgfx::Font* const* getFonts()
{
    return _fonts;
}
}
