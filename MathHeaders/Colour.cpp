#include "Colour.h"

std::string MathClasses::Colour::ToString() const
{
    std::string bitString;
    for (int i = 0; i < 4; ++i)
    {
        int byteShift = (3 - i) * 8;
        unsigned char bits = unsigned char(colour >> byteShift);
        for (int j = 0; j < 8; ++j)
        {
            std::uint32_t mask = 1 << (7 - j);
            bool isBitSet = (bits & mask) != 0;
            bitString += std::to_string(int(isBitSet));
        }
        bitString += " ";
    }
    return bitString;
}

MathClasses::Colour::Colour()
{
    this->colour = 0;
}

MathClasses::Colour::Colour(Byte r, Byte g, Byte b, Byte a)
{
    std::uint32_t newColour = {0};
    newColour |= r << 24;
    newColour |= g << 16;
    newColour |= b << 8;
    newColour |= a;
}

MathClasses::Byte MathClasses::Colour::GetRed() const
{
    return this->colour << 24;
}

MathClasses::Byte MathClasses::Colour::GetGreen() const
{
    return this->colour << 16;
}

MathClasses::Byte MathClasses::Colour::GetBlue() const
{
    return this->colour << 8;
}

MathClasses::Byte MathClasses::Colour::GetAlpha() const
{
    return this->colour;
}

void MathClasses::Colour::SetRed(Byte v)
{
    this->colour |= v << 24;
}

void MathClasses::Colour::SetGreen(Byte v)
{
    this->colour |= v << 16;
}

void MathClasses::Colour::SetBlue(Byte v)
{
    this->colour |= v << 8;
}

void MathClasses::Colour::SetAlpha(Byte v)
{
    this->colour |= v;
}

bool MathClasses::operator==(Colour a, Colour b)
{
    if (a.GetRed() == b.GetRed() && a.GetGreen() == b.GetGreen() && a.GetBlue() == b.GetBlue() && a.GetAlpha() == b.GetAlpha()) {
        return true;
    }
    else {
        return false;
    }
}

bool MathClasses::operator!=(Colour a, Colour b)
{
    if (!(a.GetRed() == b.GetRed() && a.GetGreen() == b.GetGreen() && a.GetBlue() == b.GetBlue() && a.GetAlpha() == b.GetAlpha())) {
        return true;
    }
    else {
        return false;
    }
}
