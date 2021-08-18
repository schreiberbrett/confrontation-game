#include <stdlib.h>
#include <stdbool.h>
#include "cards.h"

#define NUMBER_OF_GOOD_PIECES 9

struct PotentialGoodPiece {
    bool can_be_frodo;
    bool can_be_pippin;
    bool can_be_gandalf;
    bool can_be_sam;
    bool can_be_legolas;
    bool can_be_aragorn;
    bool can_be_gimli;
    bool can_be_merry;
    bool can_be_boromir;
};

struct PotentialGoodPieces {
    size_t number_of_pieces;
    struct PotentialGoodPiece pieces[NUMBER_OF_GOOD_PIECES];
};

struct PotentialGoodPiece union_pieces2(struct PotentialGoodPiece a, struct PotentialGoodPiece b) {
    return (struct PotentialGoodPiece) {
        .can_be_frodo   = a.can_be_frodo   || b.can_be_frodo,
        .can_be_pippin  = a.can_be_pippin  || b.can_be_pippin,
        .can_be_gandalf = a.can_be_gandalf || b.can_be_gandalf,
        .can_be_sam     = a.can_be_sam     || b.can_be_sam,
        .can_be_legolas = a.can_be_legolas || b.can_be_legolas,
        .can_be_aragorn = a.can_be_aragorn || b.can_be_aragorn,
        .can_be_gimli   = a.can_be_gimli   || b.can_be_gimli,
        .can_be_merry   = a.can_be_merry   || b.can_be_merry,
        .can_be_boromir = a.can_be_boromir || b.can_be_boromir
    };
}

struct PotentialGoodPiece union_pieces3(struct PotentialGoodPiece a, struct PotentialGoodPiece b, struct PotentialGoodPiece c) {
    return (struct PotentialGoodPiece) {
        .can_be_frodo   = a.can_be_frodo   || b.can_be_frodo   || c.can_be_frodo,
        .can_be_pippin  = a.can_be_pippin  || b.can_be_pippin  || c.can_be_pippin,
        .can_be_gandalf = a.can_be_gandalf || b.can_be_gandalf || c.can_be_gandalf,
        .can_be_sam     = a.can_be_sam     || b.can_be_sam     || c.can_be_sam,
        .can_be_legolas = a.can_be_legolas || b.can_be_legolas || c.can_be_legolas,
        .can_be_aragorn = a.can_be_aragorn || b.can_be_aragorn || c.can_be_aragorn,
        .can_be_gimli   = a.can_be_gimli   || b.can_be_gimli   || c.can_be_gimli,
        .can_be_merry   = a.can_be_merry   || b.can_be_merry   || c.can_be_merry,
        .can_be_boromir = a.can_be_boromir || b.can_be_boromir || c.can_be_boromir
    };
}

struct PotentialGoodPiece union_pieces4(struct PotentialGoodPiece a, struct PotentialGoodPiece b, struct PotentialGoodPiece c, struct PotentialGoodPiece d) {
    return (struct PotentialGoodPiece) {
        .can_be_frodo   = a.can_be_frodo   || b.can_be_frodo   || c.can_be_frodo   || d.can_be_frodo,
        .can_be_pippin  = a.can_be_pippin  || b.can_be_pippin  || c.can_be_pippin  || d.can_be_pippin,
        .can_be_gandalf = a.can_be_gandalf || b.can_be_gandalf || c.can_be_gandalf || d.can_be_gandalf,
        .can_be_sam     = a.can_be_sam     || b.can_be_sam     || c.can_be_sam     || d.can_be_sam,
        .can_be_legolas = a.can_be_legolas || b.can_be_legolas || c.can_be_legolas || d.can_be_legolas,
        .can_be_aragorn = a.can_be_aragorn || b.can_be_aragorn || c.can_be_aragorn || d.can_be_aragorn,
        .can_be_gimli   = a.can_be_gimli   || b.can_be_gimli   || c.can_be_gimli   || d.can_be_gimli,
        .can_be_merry   = a.can_be_merry   || b.can_be_merry   || c.can_be_merry   || d.can_be_merry,
        .can_be_boromir = a.can_be_boromir || b.can_be_boromir || c.can_be_boromir || d.can_be_boromir,
    };
}

struct PotentialGoodPieces shuffle2(struct PotentialGoodPieces potential_good_pieces, int i1, int i2) {
    struct PotentialGoodPieces result;
    result.number_of_pieces = potential_good_pieces.number_of_pieces;

    for (int i = 0; i < potential_good_pieces.number_of_pieces; i++) {
        if (i == i1 || i == i2) {
            result.pieces[i] = union_pieces2(
                potential_good_pieces.pieces[i1],
                potential_good_pieces.pieces[i2]
            );
        } else {
            result.pieces[i] = potential_good_pieces.pieces[i];
        }
    }

    return result;
}

struct PotentialGoodPieces shuffle3(struct PotentialGoodPieces potential_good_pieces, int i1, int i2, int i3) {
    struct PotentialGoodPieces result;
    result.number_of_pieces = potential_good_pieces.number_of_pieces;

    for (int i = 0; i < potential_good_pieces.number_of_pieces; i++) {
        if (i == i1 || i == i2 || i == i3) {
            result.pieces[i] = union_pieces3(
                potential_good_pieces.pieces[i1],
                potential_good_pieces.pieces[i2],
                potential_good_pieces.pieces[i3]
            );
        } else {
            result.pieces[i] = potential_good_pieces.pieces[i];
        }
    }

    return result;
}

struct PotentialGoodPieces shuffle4(struct PotentialGoodPieces potential_good_pieces, int i1, int i2, int i3, int i4) {
    struct PotentialGoodPieces result;
    result.number_of_pieces = potential_good_pieces.number_of_pieces;

    for (int i = 0; i < potential_good_pieces.number_of_pieces; i++) {
        if (i == i1 || i == i2 || i == i3 || i == i4) {
            result.pieces[i] = union_pieces4(
                potential_good_pieces.pieces[i1],
                potential_good_pieces.pieces[i2],
                potential_good_pieces.pieces[i3],
                potential_good_pieces.pieces[i4]
            );
        } else {
            result.pieces[i] = potential_good_pieces.pieces[i];
        }
    }

    return result;
} 

struct PotentialGoodPiece remove_potential(struct PotentialGoodPiece potential_good_piece, enum GoodPiece piece) {
    switch (piece) {
        case FRODO:
            potential_good_piece.can_be_frodo = false;
            break;
        case PIPPIN:
            potential_good_piece.can_be_pippin = false;
            break;
        case GANDALF:
            potential_good_piece.can_be_gandalf = false;
            break;
        case SAM:
            potential_good_piece.can_be_sam = false;
            break;
        case LEGOLAS:
            potential_good_piece.can_be_legolas = false;
            break;
        case ARAGORN:
            potential_good_piece.can_be_aragorn = false;
            break;
        case GIMLI:
            potential_good_piece.can_be_gimli = false;
            break;
        case MERRY:
            potential_good_piece.can_be_merry = false;
            break;
        case BOROMIR:
            potential_good_piece.can_be_boromir = false;
            break;
    }

    return potential_good_piece;
}

struct PotentialGoodPieces simplify(struct PotentialGoodPieces potential_good_pieces) {
    bool do_not_consider[NUMBER_OF_GOOD_PIECES] = { false };

    while (true) {
        struct FindResult result = find(potential_good_pieces, do_not_consider);
        if (result.found) {
            do_not_consider[result.index] = true;

            for (int i = 0; i < potential_good_pieces.number_of_pieces; i++) {
                if (i != result.index) {
                    potential_good_pieces.pieces[i] = remove_potential(potential_good_pieces.pieces[i], result.piece);
                }
            }

        } else {
            break;
        }
    }

    return potential_good_pieces;
}

enum GoodPiece get_certain_piece(struct PotentialGoodPiece x) {
    if (x.can_be_frodo)   return FRODO;
    if (x.can_be_pippin)  return PIPPIN;
    if (x.can_be_gandalf) return GANDALF;
    if (x.can_be_sam)     return SAM;
    if (x.can_be_legolas) return LEGOLAS;
    if (x.can_be_aragorn) return ARAGORN;
    if (x.can_be_gimli)   return GIMLI;
    if (x.can_be_merry)   return MERRY;
    if (x.can_be_boromir) return BOROMIR;
}

bool is_certain(struct PotentialGoodPiece x) {
    return number_of_possible_pieces(x) == 1;
}

int number_of_possible_pieces(struct PotentialGoodPiece x) {
    int i = 0;

    if (x.can_be_frodo) i++;
    if (x.can_be_pippin) i++;
    if (x.can_be_gandalf) i++;
    if (x.can_be_sam) i++;
    if (x.can_be_legolas) i++;
    if (x.can_be_aragorn) i++;
    if (x.can_be_gimli) i++;
    if (x.can_be_merry) i++;
    if (x.can_be_boromir) i++;

    return i;
}

enum PotentialPieceState {
    AMBIGUOUS = 0,
    NEW_UNIQUE,
    UNIQUE_ALREADY_DISCOVERED
};

struct FindResult {
    bool found;
    int index;
    enum GoodPiece piece;
};

struct FindResult find(struct PotentialGoodPieces potential_good_pieces, bool do_not_consider[NUMBER_OF_GOOD_PIECES]) {
    for (int i = 0; i < potential_good_pieces.number_of_pieces; i++) {
        struct PotentialGoodPiece piece = potential_good_pieces.pieces[i];
        if (is_certain(piece) && !do_not_consider[i]) {
            return (struct FindResult) {
                .found = true,
                .index = i,
                .piece = get_certain_piece(piece)
            };
        }
    }

    return (struct FindResult) { .found = false };
}