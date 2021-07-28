#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

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

enum GoodPiece {
	FRODO,
	PIPPIN,
	GANDALF,
	SAM,
	LEGOLAS,
	ARAGORN,
	GIMLI,
	MERRY,
	BOROMIR
};

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





