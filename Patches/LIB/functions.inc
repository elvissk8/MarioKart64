// Mario Kart 64 functions

constant DmaCopy(0x80001158)
// a0 = RAM destination
// a1 = ROM source
// a2 = Size

constant ResourceDisplay1(0x80003B04)

constant ResourceDisplay2(0x80003FD4)

constant PrintTimer(0x8004F7F4)
// a0 = X coordinate
// a1 = Y coordinate
// a2 = Time

constant DebugPrintString(0x80057484)
// a0 = Pointer to X coordinate
// a1 = Pointer to Y coordinate
// a2 = Pointer to String

constant LoadDebugFont(0x80057710)

constant DebugPrintStringCoord(0x800577A4)
// a0 = X coordinate
// a1 = Y coordinate
// a2 = Pointer to String

constant Random(0x802B7E34)
// a0 = Range
// v0 = Random number