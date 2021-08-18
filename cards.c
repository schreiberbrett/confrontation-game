#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "cards.h"

enum GoodCard {
	GOOD_1,
	GOOD_2,
	GOOD_3,
	GOOD_4,
	GOOD_5,
	GOOD_RETREAT,
	GOOD_MAGIC,
	NOBLE_SACRIFICE,
	ELVEN_CLOAK
};

enum DarkCard {
	DARK_1,
	DARK_2,
	DARK_3,
	DARK_4,
	DARK_5,
	DARK_6,
	DARK_RETREAT,
	DARK_MAGIC,
	EYE_OF_SAURON
};


struct CardOutcome {
	enum {
		STRENGTH_INCREASE,
		GOOD_RETREATS_BACKWARDS,
		DARK_RETREATS_SIDEWAYS,
		BOTH_RETREAT,
		NOBLE_SACRIFICE_PLAYED,
		GOOD_MAGIC_PLAYED,
		DARK_MAGIC_PLAYED,
		BOTH_MAGIC_PLAYED
	} type;

	uint8_t good_strength;
	uint8_t dark_strength;
};

struct CardOutcome play_cards(enum GoodCard good_card, enum DarkCard dark_card) {
	return (struct CardOutcome) {
		.type = GOOD_RETREATS_BACKWARDS,
		.good_strength = 0,
		.dark_strength = 0
	};
	
	switch (good_card) {
		case GOOD_1: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 1 };
			case DARK_2:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 2 };
			case DARK_3:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 3 };
			case DARK_4:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 4 };
			case DARK_5:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 5 };
			case DARK_6:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 6 };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 1, .dark_strength = 0 };
		} break;
		case GOOD_2: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 1 };
			case DARK_2:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 2 };
			case DARK_3:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 3 };
			case DARK_4:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 4 };
			case DARK_5:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 5 };
			case DARK_6:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 6 };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 2, .dark_strength = 0 };
		} break;
		case GOOD_3: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 1 };
			case DARK_2:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 2 };
			case DARK_3:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 3 };
			case DARK_4:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 4 };
			case DARK_5:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 5 };
			case DARK_6:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 6 };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 3, .dark_strength = 0 };
		} break;
		case GOOD_4: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 1 };
			case DARK_2:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 2 };
			case DARK_3:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 3 };
			case DARK_4:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 4 };
			case DARK_5:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 5 };
			case DARK_6:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 6 };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 4, .dark_strength = 0 };
		} break;
		case GOOD_5: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 1 };
			case DARK_2:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 2 };
			case DARK_3:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 3 };
			case DARK_4:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 4 };
			case DARK_5:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 5 };
			case DARK_6:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 6 };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 5, .dark_strength = 0 };
		} break;
		case GOOD_RETREAT: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = GOOD_RETREATS_BACKWARDS };
			case DARK_2:        return (struct CardOutcome) { .type = GOOD_RETREATS_BACKWARDS };
			case DARK_3:        return (struct CardOutcome) { .type = GOOD_RETREATS_BACKWARDS };
			case DARK_4:        return (struct CardOutcome) { .type = GOOD_RETREATS_BACKWARDS };
			case DARK_5:        return (struct CardOutcome) { .type = GOOD_RETREATS_BACKWARDS };
			case DARK_6:        return (struct CardOutcome) { .type = GOOD_RETREATS_BACKWARDS };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = BOTH_RETREAT };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
		} break;
		case GOOD_MAGIC: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_2:        return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_3:        return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_4:        return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_5:        return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_6:        return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = GOOD_MAGIC_PLAYED };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = BOTH_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
		} break;
		case NOBLE_SACRIFICE: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = NOBLE_SACRIFICE_PLAYED };
			case DARK_2:        return (struct CardOutcome) { .type = NOBLE_SACRIFICE_PLAYED };
			case DARK_3:        return (struct CardOutcome) { .type = NOBLE_SACRIFICE_PLAYED };
			case DARK_4:        return (struct CardOutcome) { .type = NOBLE_SACRIFICE_PLAYED };
			case DARK_5:        return (struct CardOutcome) { .type = NOBLE_SACRIFICE_PLAYED };
			case DARK_6:        return (struct CardOutcome) { .type = NOBLE_SACRIFICE_PLAYED };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
		} break;
		case ELVEN_CLOAK: switch (dark_card) {
			case DARK_1:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
			case DARK_2:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
			case DARK_3:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
			case DARK_4:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
			case DARK_5:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
			case DARK_6:        return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
			case DARK_RETREAT:  return (struct CardOutcome) { .type = DARK_RETREATS_SIDEWAYS };
			case DARK_MAGIC:    return (struct CardOutcome) { .type = DARK_MAGIC_PLAYED };
			case EYE_OF_SAURON: return (struct CardOutcome) { .type = STRENGTH_INCREASE, .good_strength = 0, .dark_strength = 0 };
		}
	}
}

enum Region {
	END_OF_REGIONS = 0,
	THE_SHIRE,
	CARDOLAN,
	ARTHEDAIN,
	ENDEWAITH,
	EREGION,
	RHUDAUR,
	GAP_OF_ROHAN,
	MORIA,
	MISTY_MOUNTAINS,
	THE_HIGH_PASS,
	ROHAN,
	FANGORN,
	MIRKWOOD,
	GONDOR,
	DAGORLAD,
	MORDOR
};

bool is_mountain(enum Region region) {
	switch (region) {
		case GAP_OF_ROHAN:
		case MORIA:
		case MISTY_MOUNTAINS:
		case THE_HIGH_PASS:
			return true;
			
		default:
			return false;
	}
}

enum DarkPiece {
	ORCS,
	SHELOB,
	SARUMAN,
	FLYING_NAZGUL,
	BALROG,
	WARG,
	BLACK_RIDER,
	WITCH_KING,
	CAVE_TROLL
};

int main(int argc, char **argv) {
	return 0;
}

// Moves sideways, except in the mountains
#define NUMBER_OF_MOVES_SIDEWAYS 2
const enum Region moves_sideways[][NUMBER_OF_MOVES_SIDEWAYS] = {
	[THE_SHIRE]       = {},
	[CARDOLAN]        = {ARTHEDAIN},
	[ARTHEDAIN]       = {CARDOLAN},
	[ENDEWAITH]       = {EREGION},
	[EREGION]         = {ENDEWAITH, RHUDAUR},
	[RHUDAUR]         = {EREGION},
	[GAP_OF_ROHAN]    = {},
	[MORIA]           = {},
	[MISTY_MOUNTAINS] = {},
	[THE_HIGH_PASS]   = {},
	[ROHAN]           = {FANGORN},
	[FANGORN]         = {ROHAN, MIRKWOOD},
	[MIRKWOOD]        = {FANGORN},
	[GONDOR]          = {DAGORLAD},
	[DAGORLAD]        = {GONDOR},
	[MORDOR]          = {}
};

#define NUMBER_OF_SHORTCUTS 1
const enum Region shortcuts[][NUMBER_OF_SHORTCUTS] = {
	[THE_SHIRE]       = {},
	[CARDOLAN]        = {},
	[ARTHEDAIN]       = {},
	[ENDEWAITH]       = {},
	[EREGION]         = {FANGORN},
	[RHUDAUR]         = {},
	[GAP_OF_ROHAN]    = {},
	[MORIA]           = {},
	[MISTY_MOUNTAINS] = {},
	[THE_HIGH_PASS]   = {},
	[ROHAN]           = {},
	[FANGORN]         = {ROHAN},
	[MIRKWOOD]        = {FANGORN},
	[GONDOR]          = {},
	[DAGORLAD]        = {},
	[MORDOR]          = {}
};

#define NUMBER_OF_MOVES_TOWARDS_THE_SHIRE 2
const enum Region moves_towards_the_shire[][NUMBER_OF_MOVES_TOWARDS_THE_SHIRE] = {
	[THE_SHIRE]       = {},
	[CARDOLAN]        = {THE_SHIRE},
	[ARTHEDAIN]       = {THE_SHIRE},
	[ENDEWAITH]       = {CARDOLAN},
	[EREGION]         = {CARDOLAN, ARTHEDAIN},
	[RHUDAUR]         = {ARTHEDAIN},
	[GAP_OF_ROHAN]    = {ENDEWAITH},
	[MORIA]           = {EREGION, ENDEWAITH},
	[MISTY_MOUNTAINS] = {EREGION, RHUDAUR},
	[THE_HIGH_PASS]   = {RHUDAUR},
	[ROHAN]           = {GAP_OF_ROHAN, MORIA},
	[FANGORN]         = {MORIA, MISTY_MOUNTAINS},
	[MIRKWOOD]        = {MISTY_MOUNTAINS, THE_HIGH_PASS},
	[GONDOR]          = {ROHAN, FANGORN},
	[DAGORLAD]        = {FANGORN, MIRKWOOD},
	[MORDOR]          = {GONDOR, DAGORLAD}
};

#define NUMBER_OF_MOVES_TOWARDS_MORDOR 2
const enum Region moves_towards_mordor[][NUMBER_OF_MOVES_TOWARDS_MORDOR] = {
	[THE_SHIRE]       = {CARDOLAN, ARTHEDAIN},
	[CARDOLAN]        = {ENDEWAITH, EREGION},
	[ARTHEDAIN]       = {EREGION, RHUDAUR},
	[ENDEWAITH]       = {GAP_OF_ROHAN, MORIA},
	[EREGION]         = {MORIA, MISTY_MOUNTAINS, FANGORN},
	[RHUDAUR]         = {MISTY_MOUNTAINS, THE_HIGH_PASS},
	[GAP_OF_ROHAN]    = {ROHAN},
	[MORIA]           = {ROHAN, FANGORN},
	[MISTY_MOUNTAINS] = {FANGORN, MIRKWOOD},
	[THE_HIGH_PASS]   = {MIRKWOOD},
	[ROHAN]           = {GONDOR},
	[FANGORN]         = {ROHAN, GONDOR, DAGORLAD},
	[MIRKWOOD]        = {FANGORN, DAGORLAD},
	[GONDOR]          = {MORDOR},
	[DAGORLAD]        = {MORDOR},
	[MORDOR]          = {}
};

#define NUMBER_OF_CARDS 9

struct GoodDeckState {
	const bool has_1;
	const bool has_2;
	const bool has_3;
	const bool has_4;
	const bool has_5;
	const bool has_retreat;
	const bool has_magic;
	const bool has_noble_sacrifice;
	const bool has_elven_cloak;
};

struct DarkDeckState {
	const bool has_1;
	const bool has_2;
	const bool has_3;
	const bool has_4;
	const bool has_5;
	const bool has_6;
	const bool has_retreat;
	const bool has_magic;
	const bool has_eye_of_sauron;
};

struct CurrentGoodCards {
	uint8_t number_of_cards;
	enum GoodCard cards[NUMBER_OF_CARDS];
};

struct CurrentDarkCards {
	uint8_t number_of_cards;
	enum DarkCard cards[NUMBER_OF_CARDS];
};

struct CurrentGoodCards current_good_cards(struct GoodDeckState state) {
	struct CurrentGoodCards result = { .cards = {}, .number_of_cards = 0 };

	if (state.has_1)               result.cards[result.number_of_cards++] = GOOD_1;
	if (state.has_2)               result.cards[result.number_of_cards++] = GOOD_2;
	if (state.has_3)               result.cards[result.number_of_cards++] = GOOD_3;
	if (state.has_4)               result.cards[result.number_of_cards++] = GOOD_4;
	if (state.has_5)               result.cards[result.number_of_cards++] = GOOD_5;
	if (state.has_retreat)         result.cards[result.number_of_cards++] = GOOD_RETREAT;
	if (state.has_magic)           result.cards[result.number_of_cards++] = GOOD_MAGIC;
	if (state.has_noble_sacrifice) result.cards[result.number_of_cards++] = NOBLE_SACRIFICE;
	if (state.has_elven_cloak)     result.cards[result.number_of_cards++] = ELVEN_CLOAK;

	return result;
}

struct CurrentDarkCards current_dark_cards(struct DarkDeckState state) {
	struct CurrentDarkCards result = { .cards = {}, .number_of_cards = 0 };

	if (state.has_1)             result.cards[result.number_of_cards++] = DARK_1;
	if (state.has_2)             result.cards[result.number_of_cards++] = DARK_2;
	if (state.has_3)             result.cards[result.number_of_cards++] = DARK_3;
	if (state.has_4)             result.cards[result.number_of_cards++] = DARK_4;
	if (state.has_5)             result.cards[result.number_of_cards++] = DARK_5;
	if (state.has_6)             result.cards[result.number_of_cards++] = DARK_6;
	if (state.has_retreat)       result.cards[result.number_of_cards++] = DARK_RETREAT;
	if (state.has_magic)         result.cards[result.number_of_cards++] = DARK_MAGIC;
	if (state.has_eye_of_sauron) result.cards[result.number_of_cards++] = EYE_OF_SAURON;

	return result;
}


