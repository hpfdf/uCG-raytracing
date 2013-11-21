#ifndef UCG_COLOR_H
#define UCG_COLOR_H

typedef union
{
        struct
        {
                unsigned char b, g, r, a;
        };
        unsigned int value;
} Color;

typedef struct
{
        unsigned char speculate, diffuse;       // 0.0 ~ 1.0
        unsigned char gloss;            // exp 0.0 -- 25.5
        unsigned char refractivity;     // 0  ---  255  --|
        Color base;

        Color** texture;
        
} Material;

#endif

