#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
// Buffer Definitions: 
//
// cbuffer ConstBufferCS_Per_Frame
// {
//
//   float4 g_Wind;                     // Offset:    0 Size:    16 [unused]
//   float4 g_Wind1;                    // Offset:   16 Size:    16 [unused]
//   float4 g_Wind2;                    // Offset:   32 Size:    16 [unused]
//   float4 g_Wind3;                    // Offset:   48 Size:    16 [unused]
//   int g_NumLengthConstraintIterations;// Offset:   64 Size:     4 [unused]
//   int g_bCollision;                  // Offset:   68 Size:     4 [unused]
//   float g_GravityMagnitude;          // Offset:   72 Size:     4 [unused]
//   float g_TimeStep;                  // Offset:   76 Size:     4 [unused]
//   float g_Damping0;                  // Offset:   80 Size:     4 [unused]
//   float g_StiffnessForLocalShapeMatching0;// Offset:   84 Size:     4 [unused]
//   float g_StiffnessForGlobalShapeMatching0;// Offset:   88 Size:     4 [unused]
//   float g_GlobalShapeMatchingEffectiveRange0;// Offset:   92 Size:     4 [unused]
//   float g_Damping1;                  // Offset:   96 Size:     4 [unused]
//   float g_StiffnessForLocalShapeMatching1;// Offset:  100 Size:     4 [unused]
//   float g_StiffnessForGlobalShapeMatching1;// Offset:  104 Size:     4 [unused]
//   float g_GlobalShapeMatchingEffectiveRange1;// Offset:  108 Size:     4 [unused]
//   float g_Damping2;                  // Offset:  112 Size:     4 [unused]
//   float g_StiffnessForLocalShapeMatching2;// Offset:  116 Size:     4 [unused]
//   float g_StiffnessForGlobalShapeMatching2;// Offset:  120 Size:     4 [unused]
//   float g_GlobalShapeMatchingEffectiveRange2;// Offset:  124 Size:     4 [unused]
//   float g_Damping3;                  // Offset:  128 Size:     4 [unused]
//   float g_StiffnessForLocalShapeMatching3;// Offset:  132 Size:     4 [unused]
//   float g_StiffnessForGlobalShapeMatching3;// Offset:  136 Size:     4 [unused]
//   float g_GlobalShapeMatchingEffectiveRange3;// Offset:  140 Size:     4 [unused]
//   uint g_NumOfStrandsPerThreadGroup; // Offset:  144 Size:     4
//   uint g_NumFollowHairsPerGuideHair; // Offset:  148 Size:     4
//   float g_TipSeparationFactor;       // Offset:  152 Size:     4 [unused]
//   int g_bWarp;                       // Offset:  156 Size:     4 [unused]
//   int g_NumLocalShapeMatchingIterations;// Offset:  160 Size:     4 [unused]
//   int g_NumVerticesPerStrand;        // Offset:  164 Size:     4 [unused]
//   float padding_0[2];                // Offset:  176 Size:    20 [unused]
//
// }
//
// Resource bind info for g_HairVertexPositions
// {
//
//   float4 $Element;                   // Offset:    0 Size:    16
//
// }
//
// Resource bind info for g_HairVertexPositionsPrev
// {
//
//   float4 $Element;                   // Offset:    0 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// g_HairVertexPositions                 UAV  struct         r/w    0        1
// g_HairVertexPositionsPrev             UAV  struct         r/w    1        1
// ConstBufferCS_Per_Frame           cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb0[10], immediateIndexed
dcl_uav_structured u0, 16
dcl_uav_structured u1, 16
dcl_input vThreadIDInGroupFlattened
dcl_input vThreadGroupID.x
dcl_temps 2
dcl_thread_group 64, 1, 1
udiv r0.x, null, l(64), cb0[9].x
udiv null, r0.y, vThreadIDInGroupFlattened.x, cb0[9].x
imad r0.z, vThreadGroupID.x, cb0[9].x, r0.y
iadd r0.w, cb0[9].y, l(1)
imul null, r0.z, r0.w, r0.z
iadd r0.y, -r0.y, vThreadIDInGroupFlattened.x
udiv r0.y, null, r0.y, cb0[9].x
imad r0.y, r0.z, r0.x, r0.y
mov r0.z, l(0)
loop 
  uge r0.w, r0.z, cb0[9].y
  breakc_nz r0.w
  iadd r0.z, r0.z, l(1)
  imad r0.w, r0.x, r0.z, r0.y
  ld_structured_indexable(structured_buffer, stride=16)(mixed,mixed,mixed,mixed) r1.xyz, r0.w, l(0), u0.xyzx
  store_structured u1.xyz, r0.w, l(0), r1.xyzx
endloop 
ret 
// Approximately 18 instruction slots used
#endif

const BYTE PrepareFollowHairBeforeTurningIntoGuide_Data[] =
{
     68,  88,  66,  67,   7, 254, 
    144,  28, 194, 223, 203,  17, 
    172,  81, 207,  30,  11,  21, 
    177, 160,   1,   0,   0,   0, 
    176,  13,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    160,  10,   0,   0, 176,  10, 
      0,   0, 192,  10,   0,   0, 
     20,  13,   0,   0,  82,  68, 
     69,  70, 100,  10,   0,   0, 
      3,   0,   0,   0, 228,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  67,   0,   1,   0,   0, 
     48,  10,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   6,   0, 
      0,   0,   6,   0,   0,   0, 
      1,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0, 178,   0,   0,   0, 
      6,   0,   0,   0,   6,   0, 
      0,   0,   1,   0,   0,   0, 
     16,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 204,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    103,  95,  72,  97, 105, 114, 
     86, 101, 114, 116, 101, 120, 
     80, 111, 115, 105, 116, 105, 
    111, 110, 115,   0, 103,  95, 
     72,  97, 105, 114,  86, 101, 
    114, 116, 101, 120,  80, 111, 
    115, 105, 116, 105, 111, 110, 
    115,  80, 114, 101, 118,   0, 
     67, 111, 110, 115, 116,  66, 
    117, 102, 102, 101, 114,  67, 
     83,  95,  80, 101, 114,  95, 
     70, 114,  97, 109, 101,   0, 
    204,   0,   0,   0,  31,   0, 
      0,   0,  44,   1,   0,   0, 
    208,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   1,   0, 
      0,   0, 176,   9,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
    178,   0,   0,   0,   1,   0, 
      0,   0,   8,  10,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   6,   0,   0,   0,   0, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,  20,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  56,   6, 
      0,   0,  16,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,  20,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  64,   6,   0,   0, 
     32,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
     20,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     72,   6,   0,   0,  48,   0, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,  20,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  80,   6, 
      0,   0,  64,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 116,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 152,   6,   0,   0, 
     68,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    116,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    165,   6,   0,   0,  72,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 192,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 228,   6, 
      0,   0,  76,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 192,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 239,   6,   0,   0, 
     80,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    250,   6,   0,   0,  84,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 192,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  28,   7, 
      0,   0,  88,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 192,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  63,   7,   0,   0, 
     92,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    100,   7,   0,   0,  96,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 192,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 111,   7, 
      0,   0, 100,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 192,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 145,   7,   0,   0, 
    104,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    180,   7,   0,   0, 108,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 192,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 217,   7, 
      0,   0, 112,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 192,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 228,   7,   0,   0, 
    116,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      6,   8,   0,   0, 120,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 192,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  41,   8, 
      0,   0, 124,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 192,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  78,   8,   0,   0, 
    128,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     89,   8,   0,   0, 132,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 192,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 123,   8, 
      0,   0, 136,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 192,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 158,   8,   0,   0, 
    140,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    195,   8,   0,   0, 144,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0, 232,   8, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  12,   9, 
      0,   0, 148,   0,   0,   0, 
      4,   0,   0,   0,   2,   0, 
      0,   0, 232,   8,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,  41,   9,   0,   0, 
    152,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    192,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     63,   9,   0,   0, 156,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0, 116,   6, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  71,   9, 
      0,   0, 160,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0, 116,   6,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 105,   9,   0,   0, 
    164,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
    116,   6,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    128,   9,   0,   0, 176,   0, 
      0,   0,  20,   0,   0,   0, 
      0,   0,   0,   0, 140,   9, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 103,  95, 
     87, 105, 110, 100,   0, 102, 
    108, 111,  97, 116,  52,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  11,   6, 
      0,   0, 103,  95,  87, 105, 
    110, 100,  49,   0, 103,  95, 
     87, 105, 110, 100,  50,   0, 
    103,  95,  87, 105, 110, 100, 
     51,   0, 103,  95,  78, 117, 
    109,  76, 101, 110, 103, 116, 
    104,  67, 111, 110, 115, 116, 
    114,  97, 105, 110, 116,  73, 
    116, 101, 114,  97, 116, 105, 
    111, 110, 115,   0, 105, 110, 
    116,   0,   0,   0,   2,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 112,   6, 
      0,   0, 103,  95,  98,  67, 
    111, 108, 108, 105, 115, 105, 
    111, 110,   0, 103,  95,  71, 
    114,  97, 118, 105, 116, 121, 
     77,  97, 103, 110, 105, 116, 
    117, 100, 101,   0, 102, 108, 
    111,  97, 116,   0, 171, 171, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 184,   6,   0,   0, 
    103,  95,  84, 105, 109, 101, 
     83, 116, 101, 112,   0, 103, 
     95,  68,  97, 109, 112, 105, 
    110, 103,  48,   0, 103,  95, 
     83, 116, 105, 102, 102, 110, 
    101, 115, 115,  70, 111, 114, 
     76, 111,  99,  97, 108,  83, 
    104,  97, 112, 101,  77,  97, 
    116,  99, 104, 105, 110, 103, 
     48,   0, 103,  95,  83, 116, 
    105, 102, 102, 110, 101, 115, 
    115,  70, 111, 114,  71, 108, 
    111,  98,  97, 108,  83, 104, 
     97, 112, 101,  77,  97, 116, 
     99, 104, 105, 110, 103,  48, 
      0, 103,  95,  71, 108, 111, 
     98,  97, 108,  83, 104,  97, 
    112, 101,  77,  97, 116,  99, 
    104, 105, 110, 103,  69, 102, 
    102, 101,  99, 116, 105, 118, 
    101,  82,  97, 110, 103, 101, 
     48,   0, 103,  95,  68,  97, 
    109, 112, 105, 110, 103,  49, 
      0, 103,  95,  83, 116, 105, 
    102, 102, 110, 101, 115, 115, 
     70, 111, 114,  76, 111,  99, 
     97, 108,  83, 104,  97, 112, 
    101,  77,  97, 116,  99, 104, 
    105, 110, 103,  49,   0, 103, 
     95,  83, 116, 105, 102, 102, 
    110, 101, 115, 115,  70, 111, 
    114,  71, 108, 111,  98,  97, 
    108,  83, 104,  97, 112, 101, 
     77,  97, 116,  99, 104, 105, 
    110, 103,  49,   0, 103,  95, 
     71, 108, 111,  98,  97, 108, 
     83, 104,  97, 112, 101,  77, 
     97, 116,  99, 104, 105, 110, 
    103,  69, 102, 102, 101,  99, 
    116, 105, 118, 101,  82,  97, 
    110, 103, 101,  49,   0, 103, 
     95,  68,  97, 109, 112, 105, 
    110, 103,  50,   0, 103,  95, 
     83, 116, 105, 102, 102, 110, 
    101, 115, 115,  70, 111, 114, 
     76, 111,  99,  97, 108,  83, 
    104,  97, 112, 101,  77,  97, 
    116,  99, 104, 105, 110, 103, 
     50,   0, 103,  95,  83, 116, 
    105, 102, 102, 110, 101, 115, 
    115,  70, 111, 114,  71, 108, 
    111,  98,  97, 108,  83, 104, 
     97, 112, 101,  77,  97, 116, 
     99, 104, 105, 110, 103,  50, 
      0, 103,  95,  71, 108, 111, 
     98,  97, 108,  83, 104,  97, 
    112, 101,  77,  97, 116,  99, 
    104, 105, 110, 103,  69, 102, 
    102, 101,  99, 116, 105, 118, 
    101,  82,  97, 110, 103, 101, 
     50,   0, 103,  95,  68,  97, 
    109, 112, 105, 110, 103,  51, 
      0, 103,  95,  83, 116, 105, 
    102, 102, 110, 101, 115, 115, 
     70, 111, 114,  76, 111,  99, 
     97, 108,  83, 104,  97, 112, 
    101,  77,  97, 116,  99, 104, 
    105, 110, 103,  51,   0, 103, 
     95,  83, 116, 105, 102, 102, 
    110, 101, 115, 115,  70, 111, 
    114,  71, 108, 111,  98,  97, 
    108,  83, 104,  97, 112, 101, 
     77,  97, 116,  99, 104, 105, 
    110, 103,  51,   0, 103,  95, 
     71, 108, 111,  98,  97, 108, 
     83, 104,  97, 112, 101,  77, 
     97, 116,  99, 104, 105, 110, 
    103,  69, 102, 102, 101,  99, 
    116, 105, 118, 101,  82,  97, 
    110, 103, 101,  51,   0, 103, 
     95,  78, 117, 109,  79, 102, 
     83, 116, 114,  97, 110, 100, 
    115,  80, 101, 114,  84, 104, 
    114, 101,  97, 100,  71, 114, 
    111, 117, 112,   0, 100, 119, 
    111, 114, 100,   0, 171, 171, 
      0,   0,  19,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 224,   8,   0,   0, 
    103,  95,  78, 117, 109,  70, 
    111, 108, 108, 111, 119,  72, 
     97, 105, 114, 115,  80, 101, 
    114,  71, 117, 105, 100, 101, 
     72,  97, 105, 114,   0, 103, 
     95,  84, 105, 112,  83, 101, 
    112,  97, 114,  97, 116, 105, 
    111, 110,  70,  97,  99, 116, 
    111, 114,   0, 103,  95,  98, 
     87,  97, 114, 112,   0, 103, 
     95,  78, 117, 109,  76, 111, 
     99,  97, 108,  83, 104,  97, 
    112, 101,  77,  97, 116,  99, 
    104, 105, 110, 103,  73, 116, 
    101, 114,  97, 116, 105, 111, 
    110, 115,   0, 103,  95,  78, 
    117, 109,  86, 101, 114, 116, 
    105,  99, 101, 115,  80, 101, 
    114,  83, 116, 114,  97, 110, 
    100,   0, 112,  97, 100, 100, 
    105, 110, 103,  95,  48,   0, 
    171, 171,   0,   0,   3,   0, 
      1,   0,   1,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 184,   6, 
      0,   0, 216,   9,   0,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,   2,   0,   0,   0, 
    228,   9,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     36,  69, 108, 101, 109, 101, 
    110, 116,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  11,   6,   0,   0, 
    216,   9,   0,   0,   0,   0, 
      0,   0,  16,   0,   0,   0, 
      2,   0,   0,   0, 228,   9, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  54,  46,  51, 
     46,  57,  54,  48,  48,  46, 
     49,  54,  51,  56,  52,   0, 
    171, 171,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  83,  72, 
     69,  88,  76,   2,   0,   0, 
     80,   0,   5,   0, 147,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     10,   0,   0,   0, 158,   0, 
      0,   4,   0, 224,  17,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0, 158,   0,   0,   4, 
      0, 224,  17,   0,   1,   0, 
      0,   0,  16,   0,   0,   0, 
     95,   0,   0,   2,   0,  64, 
      2,   0,  95,   0,   0,   2, 
     18,  16,   2,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
    155,   0,   0,   4,  64,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  78,   0, 
      0,   9,  18,   0,  16,   0, 
      0,   0,   0,   0,   0, 208, 
      0,   0,   1,  64,   0,   0, 
     64,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,  78,   0, 
      0,   8,   0, 208,   0,   0, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  10,  64,   2,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
     35,   0,   0,   9,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  16,   2,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     30,   0,   0,   8, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     26, 128,  32,   0,   0,   0, 
      0,   0,   9,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,  38,   0,   0,   8, 
      0, 208,   0,   0,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   7,  34,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,  10,  64, 
      2,   0,  78,   0,   0,   9, 
     34,   0,  16,   0,   0,   0, 
      0,   0,   0, 208,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  35,   0,   0,   9, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
     66,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  48,   0, 
      0,   1,  80,   0,   0,   8, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  26, 128, 
     32,   0,   0,   0,   0,   0, 
      9,   0,   0,   0,   3,   0, 
      4,   3,  58,   0,  16,   0, 
      0,   0,   0,   0,  30,   0, 
      0,   7,  66,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   1,   0, 
      0,   0,  35,   0,   0,   9, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0, 167,   0,   0, 139, 
      2, 131,   0, 128, 131, 153, 
     25,   0, 114,   0,  16,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  70, 226,  17,   0, 
      0,   0,   0,   0, 168,   0, 
      0,   9, 114, 224,  17,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  22,   0, 
      0,   1,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0,  18,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   7,   0, 
      0,   0,   4,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0
};