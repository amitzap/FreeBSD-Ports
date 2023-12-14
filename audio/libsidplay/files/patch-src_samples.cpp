samples.cpp:80:2: error: constant expression evaluates to 128 which cannot be narrowed to type 'sbyte' (aka 'signed char') [-Wc++11-narrowing]
        0x80,0x91,0xa2,0xb3,0xc4,0xd5,0xe6,0xf7,
        ^~~~
samples.cpp:80:2: note: insert an explicit cast to silence this issue
        0x80,0x91,0xa2,0xb3,0xc4,0xd5,0xe6,0xf7,
        ^~~~
        static_cast<sbyte>( )

--- src/samples.cpp.orig	2002-05-22 17:38:18 UTC
+++ src/samples.cpp
@@ -77,7 +77,7 @@ sampleChannel ch4, ch5;
 
 const sbyte galwayNoiseTab1[16] =
 {
-	0x80,0x91,0xa2,0xb3,0xc4,0xd5,0xe6,0xf7,
+	(sbyte)0x80,(sbyte)0x91,(sbyte)0xa2,(sbyte)0xb3,(sbyte)0xc4,(sbyte)0xd5,(sbyte)0xe6,(sbyte)0xf7,
 	0x08,0x19,0x2a,0x3b,0x4c,0x5d,0x6e,0x7f
 };
 
@@ -86,9 +86,9 @@ sbyte galwayNoiseSamTab[16];
 
 const sbyte sampleConvertTab[16] =
 {
-//  0x81,0x99,0xaa,0xbb,0xcc,0xdd,0xee,0xff,
+//  (sbyte)0x81,(sbyte)0x99,(sbyte)0xaa,(sbyte)0xbb,(sbyte)0xcc,(sbyte)0xdd,(sbyte)0xee,(sbyte)0xff,
 //  0x00,0x11,0x22,0x33,0x44,0x55,0x66,0x7f
-	0x81,0x90,0xa0,0xb0,0xc0,0xd0,0xe0,0xf0,
+	(sbyte)0x81,(sbyte)0x90,(sbyte)0xa0,(sbyte)0xb0,(sbyte)0xc0,(sbyte)0xd0,(sbyte)0xe0,(sbyte)0xf0,
 	0x00,0x10,0x20,0x30,0x40,0x50,0x60,0x70
 };
 