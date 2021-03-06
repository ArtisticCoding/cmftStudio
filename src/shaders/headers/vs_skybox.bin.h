static const uint8_t vs_skybox_glsl[841] =
{
	0x56, 0x53, 0x48, 0x03, 0xc0, 0x6d, 0x41, 0x35, 0x02, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH..mA5...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x00, 0x00, 0x01, 0x00, // elViewProj......
	0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x00, 0x00, 0x38, // .u_uniforms.8..8
	0x00, 0x13, 0x03, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, // .....attribute h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, // ighp vec3 a_posi
	0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, // tion;.attribute 
	0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, // highp vec2 a_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, // coord0;.varying 
	0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x64, 0x69, 0x72, // highp vec3 v_dir
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ;.uniform highp 
	0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, // mat4 u_modelView
	0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, // Proj;.uniform ve
	0x63, 0x34, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x35, 0x36, // c4 u_uniforms[56
	0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, // ];.void main ().
	0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x6d, // {.  highp mat4 m
	0x74, 0x78, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // tx_1;.  highp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_2.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_2.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, // gl_Position = (u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, // _modelViewProj *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, //  tmpvar_2);.  hi
	0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ghp float tmpvar
	0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, // _3;.  highp floa
	0x74, 0x20, 0x74, 0x68, 0x65, 0x74, 0x61, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x68, 0x65, // t theta_4;.  the
	0x74, 0x61, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // ta_4 = (u_unifor
	0x6d, 0x73, 0x5b, 0x32, 0x38, 0x5d, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x3b, // ms[28].y * 0.5);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x73, // .  tmpvar_3 = (s
	0x69, 0x6e, 0x28, 0x74, 0x68, 0x65, 0x74, 0x61, 0x5f, 0x34, 0x29, 0x20, 0x2f, 0x20, 0x63, 0x6f, // in(theta_4) / co
	0x73, 0x28, 0x74, 0x68, 0x65, 0x74, 0x61, 0x5f, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, // s(theta_4));.  h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ighp vec2 tmpvar
	0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x78, // _5;.  tmpvar_5.x
	0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x2a, 0x20, 0x31, //  = (tmpvar_3 * 1
	0x2e, 0x33, 0x33, 0x33, 0x33, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // .33333);.  tmpva
	0x72, 0x5f, 0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // r_5.y = tmpvar_3
	0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x74, 0x78, 0x5f, 0x31, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x75, // ;.  mtx_1[0] = u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // _uniforms[0];.  
	0x6d, 0x74, 0x78, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, // mtx_1[1] = u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x74, 0x78, 0x5f, // forms[1];.  mtx_
	0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // 1[2] = u_uniform
	0x73, 0x5b, 0x32, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x74, 0x78, 0x5f, 0x31, 0x5b, 0x33, 0x5d, // s[2];.  mtx_1[3]
	0x20, 0x3d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x33, 0x5d, //  = u_uniforms[3]
	0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, // ;.  highp vec4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_6;.  tmpva
	0x72, 0x5f, 0x36, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31, 0x2e, // r_6.zw = vec2(1.
	0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 0, 0.0);.  tmpva
	0x72, 0x5f, 0x36, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x28, 0x32, 0x2e, 0x30, 0x20, // r_6.xy = (((2.0 
	0x2a, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2d, // * a_texcoord0) -
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, //  1.0) * tmpvar_5
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x64, 0x69, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x6d, 0x74, // );.  v_dir = (mt
	0x78, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x2e, // x_1 * tmpvar_6).
	0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // xyz;.}...
};
static const uint8_t vs_skybox_dx9[628] =
{
	0x56, 0x53, 0x48, 0x03, 0xc0, 0x6d, 0x41, 0x35, 0x02, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH..mA5...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x1d, 0x00, 0x04, 0x00, // elViewProj......
	0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x05, 0x38, 0x00, 0x00, 0x1d, // .u_uniforms.8...
	0x00, 0x40, 0x02, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x2f, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, // .@......./.CTAB.
	0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, // ................
	0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, // ...........D....
	0x00, 0x1d, 0x00, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, // .......T.......d
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, // ...........p....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // ...u_modelViewPr
	0x6f, 0x6a, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // oj..............
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, // ...u_uniforms...
	0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, // .......8.......v
	0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, // s_3_0.Microsoft 
	0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, // (R) HLSL Shader 
	0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, // Compiler 9.29.95
	0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, 0x21, 0x00, 0x0f, 0xa0, 0x83, // 2.3111.Q...!....
	0xf9, 0xa2, 0x3d, 0x00, 0x00, 0x00, 0x3f, 0xdb, 0x0f, 0xc9, 0x40, 0xdb, 0x0f, 0x49, 0xc0, 0x51, // ..=...?...@..I.Q
	0x00, 0x00, 0x05, 0x22, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0xbf, 0xab, // ..."......@.....
	0xaa, 0xaa, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, // ..?.............
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, // ................
	0x00, 0x05, 0x80, 0x01, 0x00, 0x07, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x1e, // ................
	0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x1d, // .....U..........
	0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x0f, 0x80, 0x1f, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x20, 0x00, 0xe4, 0xa0, 0x01, // ........... ....
	0x00, 0x00, 0x02, 0x00, 0x00, 0x03, 0x80, 0x21, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, // .......!........
	0x00, 0x01, 0x80, 0x1c, 0x00, 0x55, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x13, // .....U.......U..
	0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x21, 0x00, 0xaa, 0xa0, 0x21, 0x00, 0xff, 0xa0, 0x25, // .......!...!...%
	0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, // ................
	0x00, 0x00, 0x80, 0x01, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, // .....U..........
	0x00, 0x55, 0x80, 0x22, 0x00, 0xaa, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0c, 0x80, 0x01, // .U."............
	0x00, 0x44, 0x90, 0x22, 0x00, 0x00, 0xa0, 0x22, 0x00, 0x55, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, // .D."...".U......
	0x00, 0x03, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xee, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x0e, 0x80, 0x00, 0x00, 0x55, 0x80, 0x01, 0x00, 0x90, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, // .....U..........
	0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xf9, 0x80, 0x02, // ................
	0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0xff, // ................
	0xff, 0x00, 0x00, 0x00,                                                                         // ....
};
static const uint8_t vs_skybox_dx11[823] =
{
	0x56, 0x53, 0x48, 0x03, 0xc0, 0x6d, 0x41, 0x35, 0x02, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH..mA5...u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x00, 0xe0, 0x09, 0x04, 0x00, // elViewProj......
	0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x05, 0x38, 0x30, 0x0a, 0x38, // .u_uniforms.80.8
	0x00, 0xfc, 0x02, 0x44, 0x58, 0x42, 0x43, 0x05, 0xf4, 0x0d, 0x75, 0xa5, 0x0a, 0xe2, 0xb9, 0x11, // ...DXBC...u.....
	0x61, 0xd6, 0x11, 0x9b, 0xfb, 0x0d, 0x45, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x02, 0x00, 0x00, 0x03, // a.....E.........
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x49, // ...,...........I
	0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, // SGNL...........8
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .......A........
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x50, // ...............P
	0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // OSITION.TEXCOORD
	0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, // ...OSGNP........
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, // ...8............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x05, // ...........D....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, // ................
	0x08, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, // ...SV_POSITION.T
	0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x1c, // EXCOORD....SHDR.
	0x02, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x87, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, // ...@.......Y...F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, // . ........._...r
	0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, // ......._...2....
	0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // ...g.... .......
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, // ...e...r ......h
	0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, // .......8........
	0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...V.......F. ..
	0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, // .......2........
	0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00, 0x06, // ...F. ..........
	0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, // .......F.......2
	0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...........F. ..
	0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ...............F
	0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, // ............ ...
	0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, // ...F.......F. ..
	0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, // .......8........
	0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x01, // ..... ..........
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x4d, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, // @.....?M........
	0x00, 0x00, 0x00, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, // ......."........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, // ...............8
	0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xab, 0xaa, 0xaa, 0x3f, 0x32, 0x00, 0x00, 0x0f, 0xc2, // ....@.....?2....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x14, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, // ................
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, // @.............@.
	0x00, 0x00, 0x40, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@.@...........
	0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x38, 0x00, 0x00, 0x07, 0x32, 0x00, 0x10, 0x00, 0x00, // .......8...2....
	0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x0a, 0x10, 0x00, 0x00, // ...F............
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, // ...8...........V
	0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x89, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, // ......... ......
	0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, // ...2...r........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, // .......F. ......
	0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x72, // ...............r
	0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, //  ......F.......F
	0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, // . .........>....
	0x02, 0x01, 0x00, 0x10, 0x00, 0xb0, 0x0d,                                                       // .......
};
