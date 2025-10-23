#ifndef _PIECES_
#define _PIECES_

#include <array>
#include <cstdint>

enum class PieceType {
    I, 
    O, 
    T, 
    L, 
    J 
};

// each piece is a 5x5 grid in which:
// 0-> empty, 1-> piece, 2-> pivot point of the piece
using Grid = std::array<std::array<uint8_t,5>,5>;

// ------------------------------------------------------------------
// Pieces Template Grids
// ------------------------------------------------------------------
inline constexpr Grid I_piece = {{
    {{0,0,0,0,0}},
    {{0,0,1,0,0}},
    {{0,0,2,0,0}}, // pivot at (2,2)
    {{0,0,1,0,0}},
    {{0,0,1,0,0}}
}};

inline constexpr Grid O_piece = {{
    {{0,0,0,0,0}},
    {{0,0,0,0,0}},
    {{0,0,2,1,0}}, // pivot inside 2x2 square
    {{0,0,1,1,0}},
    {{0,0,0,0,0}}
}};

inline constexpr Grid T_piece = {{
    {{0,0,0,0,0}},
    {{0,0,0,0,0}},
    {{0,1,2,1,0}}, // pivot center of T
    {{0,0,1,0,0}},
    {{0,0,0,0,0}}
}};

inline constexpr Grid L_piece = {{
    {{0,0,0,0,0}},
    {{0,0,1,0,0}},
    {{0,0,2,0,0}}, // pivot in stem
    {{0,0,1,1,0}}, // foot right
    {{0,0,0,0,0}}
}};

inline constexpr Grid J_piece = {{
    {{0,0,0,0,0}},
    {{0,0,1,0,0}},
    {{0,0,2,0,0}}, // pivot in stem
    {{0,1,1,0,0}}, // foot left
    {{0,0,0,0,0}}
}};



#endif // _PIECES_