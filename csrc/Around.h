// Around font from https://damieng.com/zx-origins
static const unsigned char FONT_AROUND_BITMAP[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  
	0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, // !
	0x12, 0x24, 0x24, 0x48, 0x00, 0x00, 0x00, 0x00, // "
	0x24, 0x24, 0xff, 0x24, 0x24, 0xff, 0x24, 0x24, // #
	0x0c, 0x3f, 0x68, 0x38, 0x0e, 0x0b, 0x7e, 0x18, // $
	0x61, 0x92, 0x94, 0x68, 0x16, 0x29, 0x49, 0x86, // %
	0x38, 0x64, 0x40, 0x38, 0x48, 0x42, 0x66, 0x3b, // &
	0x30, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x1c, 0x30, 0x20, 0x20, 0x20, 0x20, 0x30, 0x1c, // (
	0x38, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x0c, 0x38, // )
	0x08, 0x08, 0x08, 0x77, 0x08, 0x14, 0x22, 0x00, // *
	0x08, 0x08, 0x08, 0x7f, 0x08, 0x08, 0x08, 0x00, // +
	0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x08, 0x10, // ,
	0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, // .
	0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, // /
	0x3e, 0x63, 0x45, 0x49, 0x49, 0x51, 0x63, 0x3e, // 0
	0x08, 0x18, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, // 1
	0x3e, 0x63, 0x41, 0x03, 0x0e, 0x38, 0x60, 0x7f, // 2
	0x7f, 0x02, 0x1c, 0x06, 0x03, 0x41, 0x43, 0x3e, // 3
	0x04, 0x08, 0x10, 0x12, 0x22, 0x7f, 0x02, 0x02, // 4
	0x7f, 0x40, 0x5e, 0x63, 0x01, 0x41, 0x63, 0x3e, // 5
	0x3e, 0x40, 0x5e, 0x63, 0x41, 0x41, 0x63, 0x3e, // 6
	0x7e, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // 7
	0x3e, 0x63, 0x22, 0x3e, 0x63, 0x41, 0x63, 0x3e, // 8
	0x3e, 0x63, 0x41, 0x41, 0x63, 0x3d, 0x01, 0x3e, // 9
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, // :
	0x00, 0x00, 0x18, 0x00, 0x08, 0x10, 0x10, 0x20, // ;
	0x04, 0x08, 0x10, 0x20, 0x20, 0x10, 0x08, 0x04, // <
	0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x00, // =
	0x20, 0x10, 0x08, 0x04, 0x04, 0x08, 0x10, 0x20, // >
	0x3e, 0x63, 0x41, 0x03, 0x0e, 0x00, 0x08, 0x08, // ?
	0x3e, 0x63, 0x4d, 0x53, 0x51, 0x4f, 0x60, 0x3f, // @
	0x3e, 0x63, 0x41, 0x41, 0x7f, 0x41, 0x41, 0x41, // A  33 / 65
	0x7e, 0x43, 0x41, 0x7e, 0x43, 0x41, 0x43, 0x7e, // B
	0x3e, 0x63, 0x41, 0x40, 0x40, 0x41, 0x63, 0x3e, // C
	0x7e, 0x43, 0x41, 0x41, 0x41, 0x41, 0x43, 0x7e, // D
	0x3f, 0x60, 0x40, 0x7c, 0x40, 0x40, 0x60, 0x3f, // E
	0x3f, 0x60, 0x40, 0x40, 0x7c, 0x40, 0x40, 0x40, // F
	0x3e, 0x63, 0x41, 0x40, 0x4f, 0x41, 0x63, 0x3e, // G
	0x41, 0x41, 0x41, 0x7f, 0x41, 0x41, 0x41, 0x41, // H
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // I
	0x01, 0x01, 0x01, 0x01, 0x01, 0x41, 0x63, 0x3e, // J
	0x41, 0x42, 0x44, 0x78, 0x44, 0x42, 0x41, 0x41, // K
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x3f, // L
	0x36, 0x6b, 0x49, 0x49, 0x49, 0x49, 0x41, 0x41, // M
	0x3e, 0x63, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, // N
	0x3e, 0x63, 0x41, 0x41, 0x41, 0x41, 0x63, 0x3e, // O
	0x7e, 0x43, 0x41, 0x43, 0x7e, 0x40, 0x40, 0x40, // P
	0x3e, 0x63, 0x41, 0x41, 0x49, 0x45, 0x66, 0x3b, // Q
	0x7e, 0x43, 0x41, 0x43, 0x7e, 0x44, 0x42, 0x41, // R
	0x3e, 0x63, 0x41, 0x38, 0x0e, 0x41, 0x63, 0x3e, // S
	0x7f, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // T
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x63, 0x3e, // U
	0x41, 0x41, 0x41, 0x41, 0x22, 0x22, 0x1c, 0x08, // V
	0x41, 0x41, 0x49, 0x49, 0x49, 0x49, 0x6b, 0x36, // W
	0x41, 0x41, 0x22, 0x1c, 0x22, 0x41, 0x41, 0x41, // X
	0x41, 0x41, 0x22, 0x14, 0x08, 0x08, 0x08, 0x08, // Y
	0x7e, 0x01, 0x01, 0x0e, 0x38, 0x40, 0x40, 0x3f, // Z
	0x1c, 0x30, 0x20, 0x20, 0x20, 0x20, 0x30, 0x1c, // [
	0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, // 
	0x38, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x0c, 0x38, // ]
	0x00, 0x1c, 0x2a, 0x49, 0x08, 0x08, 0x08, 0x08, // ^
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // _
	0x1e, 0x31, 0x20, 0x20, 0x7e, 0x20, 0x20, 0x7f, // £
	0x00, 0x00, 0x3e, 0x01, 0x3f, 0x41, 0x61, 0x3f, // a 65 / 97
	0x40, 0x40, 0x5e, 0x63, 0x41, 0x41, 0x43, 0x7e, // b
	0x00, 0x00, 0x3e, 0x63, 0x40, 0x40, 0x63, 0x3e, // c
	0x01, 0x01, 0x3d, 0x63, 0x41, 0x41, 0x61, 0x3f, // d
	0x00, 0x00, 0x3e, 0x63, 0x41, 0x7f, 0x40, 0x3f, // e
	0x1e, 0x30, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x20, // f
	0x00, 0x00, 0x3e, 0x43, 0x61, 0x3f, 0x01, 0x3e, // g
	0x40, 0x40, 0x5e, 0x63, 0x41, 0x41, 0x41, 0x41, // h
	0x08, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // i
	0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x46, 0x3c, // j
	0x40, 0x41, 0x41, 0x42, 0x7c, 0x42, 0x41, 0x41, // k
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x1c, // l
	0x00, 0x00, 0x36, 0x6b, 0x49, 0x49, 0x49, 0x49, // m
	0x00, 0x00, 0x3e, 0x63, 0x41, 0x41, 0x41, 0x41, // n
	0x00, 0x00, 0x3e, 0x63, 0x41, 0x41, 0x63, 0x3e, // o
	0x00, 0x00, 0x7e, 0x43, 0x41, 0x63, 0x5e, 0x40, // p
	0x00, 0x00, 0x3f, 0x61, 0x41, 0x63, 0x3d, 0x01, // q
	0x00, 0x00, 0x5e, 0x63, 0x41, 0x40, 0x40, 0x40, // r
	0x00, 0x00, 0x3e, 0x43, 0x38, 0x0e, 0x61, 0x3e, // s
	0x10, 0x10, 0x7c, 0x10, 0x10, 0x10, 0x18, 0x0e, // t
	0x00, 0x00, 0x41, 0x41, 0x41, 0x41, 0x63, 0x3d, // u
	0x00, 0x00, 0x41, 0x41, 0x22, 0x22, 0x1c, 0x08, // v
	0x00, 0x00, 0x41, 0x49, 0x49, 0x49, 0x6b, 0x36, // w
	0x00, 0x00, 0x41, 0x22, 0x1c, 0x1c, 0x22, 0x41, // x
	0x00, 0x00, 0x41, 0x41, 0x63, 0x3d, 0x01, 0x3e, // y
	0x00, 0x00, 0x7e, 0x01, 0x0e, 0x38, 0x40, 0x3f, // z
	0x0e, 0x18, 0x10, 0x60, 0x10, 0x10, 0x18, 0x0e, // {
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, // |
	0x70, 0x18, 0x08, 0x06, 0x08, 0x08, 0x18, 0x70, // }
	0x31, 0x49, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
	0x7e, 0xc3, 0x9d, 0xb5, 0xa1, 0x9d, 0xc3, 0x7e, // ©
};