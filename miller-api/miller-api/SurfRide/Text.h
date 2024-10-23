#pragma once

namespace SurfRide {
    struct SRS_TEXTDATA {
        enum class VerticalAlignment {
            TOP,
            CENTER,
            BOTTOM,
        };

        inline bool GetWrapFlag() const {
            return flags & 0x1;
        }

        inline void SetWrapFlag(bool state) {
            unsigned int mask = 0x1;
            if (state)
                flags |= mask;
            else
                flags &= ~mask;
        }

        inline bool GetDisableLineHeightFlag() const {
            return flags & 0x2;
        }

        inline void SetDisableLineHeightFlag(bool state) {
            unsigned int mask = 0x2;
            if (state)
                flags |= mask;
            else
                flags &= ~mask;
        }

        inline VerticalAlignment GetVerticalAlignment() const {
            return static_cast<VerticalAlignment>((flags >> 4) & 0xF);
        }

        inline void SetVerticalAlignment(VerticalAlignment alignment) {
            flags = (flags & ~0xF0) | ((static_cast<unsigned int>(alignment) & 0xF) << 4);
        }

        unsigned int flags;
        unsigned int fontIndex;
        const char* str; // UTF-8 encoded
        Vector2 scale;
        short paddingLeft;
        short paddingRight;
        short paddingTop;
        short paddingBottom;
        short tracking;
        short lineHeight;
        SRS_FONT* font;
    };

    struct SRS_IMAGECAST;
    class ImageCast;
    class Text : public Base {
    public:
        SRS_TEXTDATA* textData;
        ImageCast* imageCast;
        Vector2 textAreaSize;
        uint32_t lineCount;
        uint32_t glyphCount;
        Vector2 startPosition;
        bool counted;
        const char* buffer; // UTF-8 encoded
        uint32_t bufferSize;

        Text(SRS_TEXTDATA* textData, ImageCast* imageCast);

        void SetText(const char* str);
        void Count();
        void AllocateTextCells();
    };

    class Text3D : Text {
    public:
        CellList* cells;
        Text3D(SRS_TEXTDATA* textData, ImageCast* imageCast);
    };
}
