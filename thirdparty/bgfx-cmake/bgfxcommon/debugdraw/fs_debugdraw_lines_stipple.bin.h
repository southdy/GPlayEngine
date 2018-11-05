static const uint8_t fs_debugdraw_lines_stipple_glsl[235] =
{
	0x46, 0x53, 0x48, 0x05, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x76, 0x61, // FSH...Z.......va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // rying highp vec4
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, //  v_color0;.varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, // ng highp float v
	0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, // _stipple;.void m
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // ain ().{.  highp
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, //  float tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x66, // .  tmpvar_1 = (f
	0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6d, 0x6f, 0x64, 0x20, 0x28, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, // loat(mod (v_stip
	0x70, 0x6c, 0x65, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // ple, 0.25)));.  
	0x69, 0x66, 0x20, 0x28, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x3c, 0x20, 0x74, 0x6d, 0x70, // if ((0.125 < tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, // var_1)) {.    di
	0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // scard;.  };.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, // _FragColor = v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // olor0;.}...
};
static const uint8_t fs_debugdraw_lines_stipple_spv[698] =
{
	0x46, 0x53, 0x48, 0x05, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0xa8, 0x02, 0x00, 0x00, 0x03, 0x02, // FSH...Z.........
	0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, // #.........}.....
	0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, // ..GLSL.std.450..
	0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x10, 0x00, // ..<...@...K.....
	0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, // ................
	0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x76, 0x5f, // in........<...v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x40, 0x00, // color0........@.
	0x00, 0x00, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_stipple.....
	0x06, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // ..K...bgfx_FragD
	0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x1e, 0x00, // ata0..G...<.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...@.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...K.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, // ..............!.
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x06, 0x00, // .. .............
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2e, 0x00, // ......+.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2f, 0x00, // .....>+......./.
	0x00, 0x00, 0x00, 0x00, 0x80, 0x3e, 0x14, 0x00, 0x02, 0x00, 0x34, 0x00, 0x00, 0x00, 0x20, 0x00, // .....>....4... .
	0x04, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..;...........;.
	0x04, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ..;...<....... .
	0x04, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..?...........;.
	0x04, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ..?...@....... .
	0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..J...........;.
	0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2b, 0x00, // ..J...K.......+.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x36, 0x00, // ......|......@6.
	0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, // ..........=.....
	0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, // ..=...<...=.....
	0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, // ..A...@.........
	0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x0c, 0x00, // ..w...A...|.....
	0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ......x.........
	0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x79, 0x00, // ..w...........y.
	0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00, 0x06, 0x00, // ../...x.........
	0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0xb8, 0x00, // ..z...A...y.....
	0x05, 0x00, 0x34, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x7a, 0x00, // ..4...g.......z.
	0x00, 0x00, 0xf7, 0x00, 0x03, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfa, 0x00, // ......h.........
	0x04, 0x00, 0x67, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0xf8, 0x00, // ..g...i...h.....
	0x02, 0x00, 0x69, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x01, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x68, 0x00, // ..i...........h.
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0xfd, 0x00, // ..>...K...=.....
	0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,                                     // ..8.......
};
static const uint8_t fs_debugdraw_lines_stipple_dx9[299] =
{
	0x46, 0x53, 0x48, 0x05, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 0x00, 0x03, // FSH...Z.........
	0xff, 0xff, 0xfe, 0xff, 0x14, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, // ......CTAB....#.
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, // ................
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, // ......ps_3_0.Mic
	0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, // rosoft (R) HLSL 
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, // Shader Compiler 
	0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, // 10.1..Q.........
	0x80, 0x40, 0x00, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, // .@...>...>....Q.
	0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, // ................
	0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x01, 0x90, 0x05, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x13, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x01, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, // ....U...........
	0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0xa1, 0x01, 0x00, 0x00, 0x90, 0x02, 0x00, // ........U.......
	0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0xaa, 0xa0, 0x58, 0x00, // ..............X.
	0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, // ................
	0x55, 0xa0, 0x41, 0x00, 0x00, 0x01, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, // U.A.............
	0x0f, 0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                               // ...........
};
static const uint8_t fs_debugdraw_lines_stipple_dx11[442] =
{
	0x46, 0x53, 0x48, 0x05, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0x44, 0x58, // FSH...Z.......DX
	0x42, 0x43, 0x6f, 0x8f, 0x64, 0x39, 0xd9, 0xef, 0xc7, 0x09, 0x59, 0xdc, 0x77, 0x5a, 0xe8, 0x91, // BCo.d9....Y.wZ..
	0x4c, 0x16, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, // L.............,.
	0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, // ..........ISGNl.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........P.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........b.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x01, // ................
	0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, // ..SV_POSITION.CO
	0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, // LOR.TEXCOORD..OS
	0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, // GN,........... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, // ......SV_TARGET.
	0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xcc, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x33, 0x00, // ..SHDR....@...3.
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, // ..b...........b.
	0x00, 0x03, 0x12, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, // ..........e.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, // ......h.......8.
	0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x10, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x41, 0x00, 0x00, 0x05, 0x12, 0x00, // ...@.....@A.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, // ..............2.
	0x00, 0x0a, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, // ..............A.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3e, 0x0a, 0x10, // .......@.....>..
	0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, // ......1.........
	0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, // ...@.....>......
	0x00, 0x00, 0x0d, 0x00, 0x04, 0x03, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, // ..............6.
	0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, // ... ......F.....
	0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                                     // ..>.......
};
static const uint8_t fs_debugdraw_lines_stipple_mtl[555] =
{
	0x46, 0x53, 0x48, 0x05, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x1c, 0x02, 0x00, 0x00, 0x75, 0x73, // FSH...Z.......us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  float4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x5f, 0x73, 0x74, // r0;.  float v_st
	0x69, 0x70, 0x70, 0x6c, 0x65, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // ipple;.};.struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, //  xlatMtlShaderOu
	0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // tput {.  float4 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, // gl_FragColor;.};
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // .struct xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x7d, // haderUniform {.}
	0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // ;.fragment xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, // tlShaderOutput x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, // latMtlMain (xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, // MtlShaderInput _
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, // mtl_i [[stage_in
	0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // ]], constant xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, // m& _mtl_u [[buff
	0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, // er(0)]]).{.  xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  _mtl_o;.  float
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, //  tmpvar_1 = 0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, //  tmpvar_1 = (flo
	0x61, 0x74, 0x28, 0x66, 0x6d, 0x6f, 0x64, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, // at(fmod (_mtl_i.
	0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x29, // v_stipple, 0.25)
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, // ));.  if ((0.125
	0x20, 0x3c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, //  < tmpvar_1)) {.
	0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x5f, 0x66, 0x72, 0x61, 0x67, //     discard_frag
	0x6d, 0x65, 0x6e, 0x74, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x5f, // ment();.  };.  _
	0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, // mtl_o.gl_FragCol
	0x6f, 0x72, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x63, 0x6f, // or = _mtl_i.v_co
	0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, // lor0;.  return _
	0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // mtl_o;.}...
};
extern const uint8_t* fs_debugdraw_lines_stipple_pssl;
extern const uint32_t fs_debugdraw_lines_stipple_pssl_size;