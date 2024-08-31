#define LAYER_Base 0
#define LAYER_Lower 1
#define LAYER_Arrows 2
#define LAYER_Factory 3
#define LAYER_Magic 4

////////////////////////////////////////////////////////////////////////////////
// HOME ROW MOD CONFIG
////////////////////////////////////////////////////////////////////////////////
// NOTE: Use the `#define` settings below to customize this keymap!
// For example, here are the main optional features you can enable:
// #define DIFFICULTY_LEVEL  4 // 0:custom, 1:easy -> 5:hard (see below)
#define ENFORCE_BILATERAL
#define DIFFICULTY_LEVEL  0 // 0:custom, 1:easy -> 5:hard (see below)
// TIP: Add more setting overrides here instead of editing them below.


//
// DIFFICULTY_LEVEL specifies your level of expertise with this keymap.
// It's meant to help newcomers gradually work their way up to mastery.
// You can disable this setting by omitting it or assigning a `0` zero.
//
// #define DIFFICULTY_LEVEL 0 // custom (see defaults below)
// #define DIFFICULTY_LEVEL 1 // novice (500ms)
// #define DIFFICULTY_LEVEL 2 // slower (400ms)
// #define DIFFICULTY_LEVEL 3 // normal (300ms)
// #define DIFFICULTY_LEVEL 4 // faster (200ms)
// #define DIFFICULTY_LEVEL 5 // expert (100ms)
//
#if defined(DIFFICULTY_LEVEL) && DIFFICULTY_LEVEL > 0
#define DIFFICULTY_LEVEL_HOLDING_TIME  ((6 - DIFFICULTY_LEVEL) * 100)
#define DIFFICULTY_LEVEL_STREAK_DECAY (((6 - DIFFICULTY_LEVEL) *  50) + 100)
#ifndef HOMEY_HOLDING_TIME
#define HOMEY_HOLDING_TIME DIFFICULTY_LEVEL_HOLDING_TIME
#endif
#ifndef HOMEY_STREAK_DECAY
#define HOMEY_STREAK_DECAY DIFFICULTY_LEVEL_STREAK_DECAY
#endif
#ifndef INDEX_HOLDING_TIME
#define INDEX_HOLDING_TIME DIFFICULTY_LEVEL_HOLDING_TIME
#endif
#ifndef INDEX_STREAK_DECAY
#define INDEX_STREAK_DECAY DIFFICULTY_LEVEL_STREAK_DECAY
#endif
#ifndef PLAIN_HOLDING_TIME
#define PLAIN_HOLDING_TIME DIFFICULTY_LEVEL_HOLDING_TIME
#endif
#ifndef PLAIN_STREAK_DECAY
#define PLAIN_STREAK_DECAY DIFFICULTY_LEVEL_STREAK_DECAY
#endif
#ifndef SPACE_HOLDING_TIME
#define SPACE_HOLDING_TIME DIFFICULTY_LEVEL_HOLDING_TIME
#endif
#ifndef SPACE_STREAK_DECAY
#define SPACE_STREAK_DECAY DIFFICULTY_LEVEL_STREAK_DECAY
#endif
#endif

//
// OPERATING_SYSTEM defines which operating system you intend to use
// with this keymap, because shortcuts vary across operating systems.
//
// - https://zmk.dev/docs/codes
// - https://en.wikipedia.org/wiki/Table_of_keyboard_shortcuts
//
#ifndef OPERATING_SYSTEM
//#define OPERATING_SYSTEM 'L' // linux
#define OPERATING_SYSTEM 'W' // windows
#endif

#define _C      LC
#define _A_TAB  LALT
#define _G_TAB  LGUI
#define _REDO   _C(Y)
#define _POWER  C_POWER
#define _W      _C
#define _HOME   HOME
#define _END    END

#define _SLEEP      C_SLEEP
#if OPERATING_SYSTEM == 'W'
    #define _LOCK   LG(L)
#elif OPERATING_SYSTEM == 'L'
    #define _LOCK   K_LOCK
#endif
#define _UNDO       _C(Z)
#define _CUT        _C(X)
#define _COPY       _C(C)
#define _PASTE      _C(V)
#define _FIND       _C(F)
#define _FIND_NEXT  _C(G)
#define _FIND_PREV  _C(LS(G))

macros {
    hl: hold_layer {
        label = "hold_layer";
        compatible = "zmk,behavior-macro";
        #binding-cells = <0>;
        wait-ms = <0>;
        tap-ms = <0>;
        bindings = <&to LAYER_Base>, <&macro_pause_for_release>, <&to LAYER_Lower>;
    };
    spc_num: spc_num {
            label = "spc_num";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <0>;
            tap-ms = <0>;
            bindings = <&kp RA(K) &kp SPACE>;
    };
    puiss: puiss {
            label = "puiss";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <0>;
            tap-ms = <0>;
            bindings = <&kp SQT &kp SQT>;
    };
    tild: tild {
            label = "tild";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <0>;
            tap-ms = <0>;
            bindings = <&kp SQT &kp C>;
    };
    diff: diff {
            label = "diff";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            wait-ms = <0>;
            tap-ms = <0>;
            bindings = <&kp RS(SQT) &kp N8>;
    };
};

// |------------------------|------------------------|
// | LEFT_HAND_KEYS         |        RIGHT_HAND_KEYS |
// |                        |                        |
// |  0  1  2  3  4         |          5  6  7  8  9 |
// | 10 11 12 13 14 15      |      16 17 18 19 20 21 |
// | 22 23 24 25 26 27      |      28 29 30 31 32 33 |
// | 34 35 36 37 38 39      |      40 41 42 43 44 45 |
// | 46 47 48 49 50 51      |      58 59 60 61 62 63 |
// | 64 65 66 67 68         |         75 76 77 78 79 |
// |                69 52   |   57 74                |
// |                 70 53  |  56 73                 |
// |                  71 54 | 55 72                  |
// |------------------------|------------------------|

combos {
    compatible = "zmk,combos";
    combo_q {
        timeout-ms = <80>;
        key-positions = <29 30>;
        bindings = <&kp P>;
    };
    combo_cedil {
        timeout-ms = <100>;
        key-positions = <59 60>;
        bindings = <&kp BSLH>;
    };
    combo_z {
        timeout-ms = <100>;
        key-positions = <60 61>;
        bindings = <&kp RBKT>;
    };
    combo_a {
        timeout-ms = <100>;
        key-positions = <25 26>;
        bindings = <&kp Q>;
    };
    combo_tiret {
        timeout-ms = <100>;
        key-positions = <49 50>;
        bindings = <&kp N4>;
    };
    combo_under {
        timeout-ms = <100>;
        key-positions = <48 49>;
        bindings = <&kp RS(MINUS)>;
    };
};

behaviors {
    xt: hold_tap_xt {
        compatible = "zmk,behavior-hold-tap";
        label = "hold_tap_xt";
        #binding-cells = <2>;
        flavor = "hold-preferred";
        tapping-term-ms = <1000>;
        quick-tap-ms = <50>;
        bindings = <&mo>, <&to>;
    };
    yt: hold_tap_yt {
        compatible = "zmk,behavior-hold-tap";
        label = "hold_tap_yt";
        #binding-cells = <2>;
        flavor = "hold-preferred";
        tapping-term-ms = <1000>;
        quick-tap-ms = <50>;
        bindings = <&mo>, <&kp>;
    };
    zt: hold_tap_zt {
        compatible = "zmk,behavior-hold-tap";
        label = "hold_tap_zt";
        #binding-cells = <2>;
        flavor = "hold-preferred";
        tapping-term-ms = <200>;
        quick-tap-ms = <1>;
        bindings = <&kp>, <&kp>;
    };
    tt: tap_toggle {
        compatible = "zmk,behavior-hold-tap";
        label = "tap_toggle";
        #binding-cells = <2>;
        flavor = "balanced";
        tapping-term-ms = <1000>;
        quick-tap-ms = <50>;
        bindings = <&hl>, <&to>;
    };


    /////////////////////////////////////////////////////////////////////
    // HOME ROW MODS BEHAVIORS
    //////////////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////////////
    //
    // Miryoku layers and home row mods (ported from my QMK endgame)
    // - https://sunaku.github.io/home-row-mods.html#porting-to-zmk
    // - https://github.com/urob/zmk-config#timeless-homerow-mods
    //
    //////////////////////////////////////////////////////////////////////////

    //
    // ENFORCE_BILATERAL cancels out single-handed home row mods activation by
    // releasing any currently pressed mods and replacing them with plain taps.
    //
    // NOTE: You may still encounter "flashing mods" where an operating system
    // action is triggered by the release of mods, such as LGUI which launches
    // the Windows Start Menu and LALT which opens the Microsoft Office Ribbon.
    //
    //#define ENFORCE_BILATERAL

    //
    // The *_FINGER_MOD specify which modifiers are used by home row mod keys.
    // Here, we use Miryoku's "GACS" (Win, Alt, Ctrl, Shift) order by default,
    // unless OPERATING_SYSTEM is macOS, in which case Win & Ctrl are swapped.
    //
    #ifndef PINKY_FINGER_MOD
    #define PINKY_FINGER_MOD LGUI
    #endif
    #ifndef RING1_FINGER_MOD
    #define RING1_FINGER_MOD LALT
    #endif
    #ifndef RING2_FINGER_MOD
    #define RING2_FINGER_MOD RALT
    #endif
    #ifndef MIDDY_FINGER_MOD
    #define MIDDY_FINGER_MOD LCTL
    #endif
    #ifndef INDEX_FINGER_MOD
    #define INDEX_FINGER_MOD LSFT
    #endif
    //
    // The following settings let you configure mods individually, per finger:
    //
    #ifndef LEFT_PINKY_MOD
    #define LEFT_PINKY_MOD  PINKY_FINGER_MOD
    #endif
    #ifndef RIGHT_PINKY_MOD
    #define RIGHT_PINKY_MOD PINKY_FINGER_MOD
    #endif
    #ifndef LEFT_RING1_MOD
    #define LEFT_RING1_MOD  RING1_FINGER_MOD
    #endif
    #ifndef RIGHT_RING1_MOD
    #define RIGHT_RING1_MOD RING1_FINGER_MOD
    #endif
    #ifndef LEFT_RING2_MOD
    #define LEFT_RING2_MOD  RING2_FINGER_MOD
    #endif
    #ifndef RIGHT_RING2_MOD
    #define RIGHT_RING2_MOD RING2_FINGER_MOD
    #endif
    #ifndef LEFT_MIDDY_MOD
    #define LEFT_MIDDY_MOD  MIDDY_FINGER_MOD
    #endif
    #ifndef RIGHT_MIDDY_MOD
    #define RIGHT_MIDDY_MOD MIDDY_FINGER_MOD
    #endif
    #ifndef LEFT_INDEX_MOD
    #define LEFT_INDEX_MOD  INDEX_FINGER_MOD
    #endif
    #ifndef RIGHT_INDEX_MOD
    #define RIGHT_INDEX_MOD INDEX_FINGER_MOD
    #endif

    //
    // HOMEY_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
    // for the pinky, ring, and middle fingers (which are assigned to Super,
    // Alt, and Ctrl respectively in the Miryoku system) on home row keys.
    //
    #ifndef HOMEY_HOLDING_TYPE
    #define HOMEY_HOLDING_TYPE "tap-preferred"
    #endif

    //
    // HOMEY_HOLDING_TIME defines how long you need to hold (milliseconds)
    // home row mod keys in order to send their modifiers to the computer
    // (i.e. "register" them) for mod-click mouse usage (e.g. Ctrl-Click).
    //
    #ifndef HOMEY_HOLDING_TIME
    #define HOMEY_HOLDING_TIME 240 // TAPPING_TERM + ALLOW_CROSSOVER_AFTER
    #endif

    //
    // HOMEY_STREAK_DECAY defines how long you need to wait (milliseconds)
    // after typing before you can use home row mods again.  It prevents
    // unintended activation of home row mods when you're actively typing.
    //
    #ifndef HOMEY_STREAK_DECAY
    #define HOMEY_STREAK_DECAY 160
    #endif

    //
    // HOMEY_REPEAT_DECAY defines how much time you have left (milliseconds)
    // after tapping a key to hold it again in order to make it auto-repeat.
    //
    #ifndef HOMEY_REPEAT_DECAY
    #define HOMEY_REPEAT_DECAY 300 // "tap then hold" for key auto-repeat
    #endif

    //
    // CHORD_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
    // for chorded home row mods (secondary keypresses in multi-mod chords).
    //
    #ifndef CHORD_HOLDING_TYPE
    #define CHORD_HOLDING_TYPE HOMEY_HOLDING_TYPE
    #endif

    //
    // CHORD_HOLDING_TIME defines how long you need to hold (milliseconds)
    // home row mod keys in order to send their modifiers to the computer
    // (i.e. "register" them) for mod-click mouse usage (e.g. Ctrl-Click).
    // This is specifically for secondary keypresses in multi-mod chords.
    //
    #ifndef CHORD_HOLDING_TIME
    #define CHORD_HOLDING_TIME 150
    #endif

    //
    // CHORD_STREAK_DECAY defines how long you need to wait (milliseconds)
    // after typing before you can use home row mods again.  It prevents
    // unintended activation of home row mods when you're actively typing
    // This is specifically for secondary keypresses in multi-mod chords.
    //
    #ifndef CHORD_STREAK_DECAY
    #define CHORD_STREAK_DECAY HOMEY_STREAK_DECAY
    #endif

    //
    // CHORD_REPEAT_DECAY defines how much time you have left (milliseconds)
    // after tapping a key to hold it again in order to make it auto-repeat.
    // This is specifically for secondary keypresses in multi-mod chords.
    //
    #ifndef CHORD_REPEAT_DECAY
    #define CHORD_REPEAT_DECAY HOMEY_REPEAT_DECAY
    #endif

    //
    // INDEX_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
    // for index fingers (which Miryoku assigns to Shift) on home row keys.
    //
    // NOTE: The "tap-preferred" flavor of ZMK hold-tap for index finger keys
    // allows faster activation of the Shift modifier (without having to wait
    // for the modified key to be released as the "balanced" flavor requires).
    // Typing streaks and the `hold-trigger-on-release` setting are disabled
    // for the index fingers so as not to hinder their speed and dexterity.
    //
    #ifndef INDEX_HOLDING_TYPE
    #define INDEX_HOLDING_TYPE "tap-preferred"
    #endif

    //
    // INDEX_HOLDING_TIME defines how long you need to hold (milliseconds)
    // index finger keys in order to send their modifiers to the computer
    // (i.e. "register" them) for mod-click mouse usage (e.g. Shift-Click).
    //
    #ifndef INDEX_HOLDING_TIME
    #define INDEX_HOLDING_TIME 180
    #endif

    //
    // INDEX_STREAK_DECAY defines how long you need to wait (milliseconds)
    // after typing before you can use home row mods again.  It prevents
    // unintended activation of home row mods when you're actively typing.
    //
    #ifndef INDEX_STREAK_DECAY
    #define INDEX_STREAK_DECAY 100
    #endif

    //
    // INDEX_REPEAT_DECAY defines how much time you have left (milliseconds)
    // after tapping a key to hold it again in order to make it auto-repeat.
    //
    #ifndef INDEX_REPEAT_DECAY
    #define INDEX_REPEAT_DECAY 300 // "tap then hold" for key auto-repeat
    #endif

    //
    // PLAIN_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
    // for index fingers (which Miryoku assigns to Shift) on home row keys.
    //
    // NOTE: The "tap-preferred" flavor of ZMK hold-tap for index finger keys
    // allows faster activation of the Shift modifier (without having to wait
    // for the modified key to be released as the "balanced" flavor requires).
    // Typing streaks and the `hold-trigger-on-release` setting are disabled
    // for the index fingers so as not to hinder their speed and dexterity.
    //
    #ifndef PLAIN_HOLDING_TYPE
    #define PLAIN_HOLDING_TYPE HOMEY_HOLDING_TYPE
    #endif

    //
    // PLAIN_HOLDING_TIME defines how long you need to hold (milliseconds)
    // index finger keys in order to send their modifiers to the computer
    // (i.e. "register" them) for mod-click mouse usage (e.g. Shift-Click).
    //
    #ifndef PLAIN_HOLDING_TIME
    #define PLAIN_HOLDING_TIME HOMEY_HOLDING_TIME
    #endif

    //
    // PLAIN_STREAK_DECAY defines how long you need to wait (milliseconds)
    // after typing before you can use home row mods again.  It prevents
    // unintended activation of home row mods when you're actively typing.
    //
    #ifndef PLAIN_STREAK_DECAY
    #define PLAIN_STREAK_DECAY HOMEY_STREAK_DECAY
    #endif

    //
    // PLAIN_REPEAT_DECAY defines how much time you have left (milliseconds)
    // after tapping a key to hold it again in order to make it auto-repeat.
    //
    #ifndef PLAIN_REPEAT_DECAY
    #define PLAIN_REPEAT_DECAY 300 // "tap then hold" for key auto-repeat
    #endif

    //
    // THUMB_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
    // for the thumbs (which are assigned to 6 layers in the Miryoku system).
    //
    // NOTE: The "balanced" flavor of ZMK hold-tap provides instant modifier
    // activation for the symbol layer (if the tapped symbol key is released
    // while the thumb layer key is still held down) for quicker programming.
    //
    #ifndef THUMB_HOLDING_TYPE
    #define THUMB_HOLDING_TYPE "balanced"
    #endif

    //
    // THUMB_HOLDING_TIME defines how long you need to hold (milliseconds)
    // a thumb key to activate a layer.  Shorter holds are treated as taps.
    //
    #ifndef THUMB_HOLDING_TIME
    #define THUMB_HOLDING_TIME 200
    #endif

    //
    // THUMB_REPEAT_DECAY defines how much time you have left (milliseconds)
    // after tapping a key to hold it again in order to make it auto-repeat.
    //
    #ifndef THUMB_REPEAT_DECAY
    #define THUMB_REPEAT_DECAY 300 // "tap then hold" for key auto-repeat
    #endif

    //
    // SPACE_HOLDING_TYPE defines the flavor of ZMK hold-tap behavior to use
    // for spacebar (assigned to the right thumb's home position by default).
    //
    // NOTE: The "balanced" flavor of ZMK hold-tap provides instant modifier
    // activation for the symbol layer (if the tapped symbol key is released
    // while the thumb layer key is still held down) for quicker programming.
    //
    #ifndef SPACE_HOLDING_TYPE
    #define SPACE_HOLDING_TYPE THUMB_HOLDING_TYPE
    #endif

    //
    // SPACE_HOLDING_TIME defines how long you need to hold (milliseconds)
    // the space thumb key to activate.  Shorter holds are treated as taps.
    //
    #ifndef SPACE_HOLDING_TIME
    #define SPACE_HOLDING_TIME THUMB_HOLDING_TIME
    #endif

    //
    // SPACE_REPEAT_DECAY defines how much time you have left (milliseconds)
    // after tapping a key to hold it again in order to make it auto-repeat.
    //
    #ifndef SPACE_REPEAT_DECAY
    #define SPACE_REPEAT_DECAY 150
    #endif

    //
    // Glove80 key positions index for positional hold-tap
    // - https://discord.com/channels/877392805654306816/937645688244826154/1066713913351221248
    // - https://media.discordapp.net/attachments/937645688244826154/1066713913133121556/image.png
    //
    // |------------------------|------------------------|
    // | LEFT_HAND_KEYS         |        RIGHT_HAND_KEYS |
    // |                        |                        |
    // |  0  1  2  3  4         |          5  6  7  8  9 |
    // | 10 11 12 13 14 15      |      16 17 18 19 20 21 |
    // | 22 23 24 25 26 27      |      28 29 30 31 32 33 |
    // | 34 35 36 37 38 39      |      40 41 42 43 44 45 |
    // | 46 47 48 49 50 51      |      58 59 60 61 62 63 |
    // | 64 65 66 67 68         |         75 76 77 78 79 |
    // |                69 52   |   57 74                |
    // |                 70 53  |  56 73                 |
    // |                  71 54 | 55 72                  |
    // |------------------------|------------------------|
    //
    #define LEFT_HAND_KEYS      \
          0  1  2  3  4         \
         10 11 12 13 14 15      \
         22 23 24 25 26 27      \
         34 35 36 37 38 39      \
         46 47 48 49 50 51      \
         64 65 66 67 68
    #define RIGHT_HAND_KEYS     \
                                           5  6  7  8  9 \
                                       16 17 18 19 20 21 \
                                       28 29 30 31 32 33 \
                                       40 41 42 43 44 45 \
                                       58 59 60 61 62 63 \
                                          75 76 77 78 79
    #define THUMB_KEYS          \
                        69 52       57 74                \
                         70 53     56 73                 \
                          71 54   55 72

    
#define KEY_LH_C6R1 	F1
#define KEY_LH_C5R1 	F2
#define KEY_LH_C4R1 	F3
#define KEY_LH_C3R1 	F4
#define KEY_LH_C2R1 	F5
#define KEY_RH_C2R1 	F6
#define KEY_RH_C3R1 	F7
#define KEY_RH_C4R1 	F8
#define KEY_RH_C5R1 	F9
#define KEY_RH_C6R1 	F10
#define KEY_LH_C6R2 	EQUAL
#define KEY_LH_C5R2 	N1
#define KEY_LH_C4R2 	N2
#define KEY_LH_C3R2 	N3
#define KEY_LH_C2R2 	N4
#define KEY_LH_C1R2 	N5
#define KEY_RH_C1R2 	N6
#define KEY_RH_C2R2 	N7
#define KEY_RH_C3R2 	N8
#define KEY_RH_C4R2 	N9
#define KEY_RH_C5R2 	N0
#define KEY_RH_C6R2 	GRAVE
#define KEY_LH_C6R3 	MINUS
#define KEY_LH_C5R3 	Q
#define KEY_LH_C4R3 	W
#define KEY_LH_C3R3 	E
#define KEY_LH_C2R3 	R
#define KEY_LH_C1R3 	T
#define KEY_RH_C1R3 	Y
#define KEY_RH_C2R3 	U
#define KEY_RH_C3R3 	I
#define KEY_RH_C4R3 	O
#define KEY_RH_C5R3 	P
#define KEY_RH_C6R3 	LBKT
#define KEY_LH_C6R4 	LSHFT
#define KEY_LH_C5R4 	A
#define KEY_LH_C4R4 	S
#define KEY_LH_C3R4 	D
#define KEY_LH_C2R4 	F
#define KEY_LH_C1R4 	G
#define KEY_RH_C1R4 	H
#define KEY_RH_C2R4 	J
#define KEY_RH_C3R4 	K
#define KEY_RH_C4R4 	L
#define KEY_RH_C5R4 	SEMI
#define KEY_RH_C6R4 	SQT
#define KEY_LH_C6R5 	TAB
#define KEY_LH_C5R5 	Z
#define KEY_LH_C4R5 	X
#define KEY_LH_C3R5 	C
#define KEY_LH_C2R5 	V
#define KEY_LH_C1R5 	B
#define KEY_RH_C1R5 	N
#define KEY_RH_C2R5 	M
#define KEY_RH_C3R5 	COMMA
#define KEY_RH_C4R5 	DOT
#define KEY_RH_C5R5 	FSLH
#define KEY_RH_C6R5 	PG_UP
#define KEY_LH_C6R6 	0
#define KEY_LH_C5R6 	LEFT
#define KEY_LH_C4R6 	UP
#define KEY_LH_C3R6 	DOWN
#define KEY_LH_C2R6 	RIGHT
#define KEY_RH_C2R6 	BSPC
#define KEY_RH_C3R6 	BSLH
#define KEY_RH_C4R6 	RBKT
#define KEY_RH_C5R6 	0
#define KEY_RH_C6R6 	PG_DN


    #define LEFT_PINKY_KEY  KEY_LH_C5R4
    #define LEFT_RING1_KEY  KEY_LH_C4R4
    #define LEFT_RING2_KEY  KEY_LH_C4R3
    #define LEFT_MIDDY_KEY  KEY_LH_C3R4
    #define LEFT_INDEX_KEY  KEY_LH_C2R4
    #define LEFT_PLAIN_KEY  KEY_LH_C1R4

    #define RIGHT_PINKY_KEY KEY_RH_C5R4
    #define RIGHT_RING1_KEY KEY_RH_C4R4
    #define RIGHT_RING2_KEY KEY_RH_C4R3
    #define RIGHT_MIDDY_KEY KEY_RH_C3R4
    #define RIGHT_INDEX_KEY KEY_RH_C2R4
    #define RIGHT_PLAIN_KEY KEY_RH_C1R4
    #define LeftPlainKey  kp LEFT_PLAIN_KEY
    #define RightPlainKey kp RIGHT_PLAIN_KEY

    //
    // Home row mods with bilateral combinations support
    //
#ifndef PINKY_HOLDING_TYPE
#define PINKY_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef PINKY_CHORD_HOLDING_TYPE
#define PINKY_CHORD_HOLDING_TYPE CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_CHORD_HOLDING_TYPE
#define LEFT_PINKY_CHORD_HOLDING_TYPE PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_PINKY_CHORD_HOLDING_TYPE
#define RIGHT_PINKY_CHORD_HOLDING_TYPE PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef PINKY_HOLDING_TIME
#define PINKY_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef PINKY_CHORD_HOLDING_TIME
#define PINKY_CHORD_HOLDING_TIME CHORD_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_CHORD_HOLDING_TIME
#define LEFT_PINKY_CHORD_HOLDING_TIME PINKY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_PINKY_CHORD_HOLDING_TIME
#define RIGHT_PINKY_CHORD_HOLDING_TIME PINKY_CHORD_HOLDING_TIME
#endif
#ifndef PINKY_STREAK_DECAY
#define PINKY_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef PINKY_CHORD_STREAK_DECAY
#define PINKY_CHORD_STREAK_DECAY CHORD_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_CHORD_STREAK_DECAY
#define LEFT_PINKY_CHORD_STREAK_DECAY PINKY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_PINKY_CHORD_STREAK_DECAY
#define RIGHT_PINKY_CHORD_STREAK_DECAY PINKY_CHORD_STREAK_DECAY
#endif
#ifndef PINKY_REPEAT_DECAY
#define PINKY_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef PINKY_CHORD_REPEAT_DECAY
#define PINKY_CHORD_REPEAT_DECAY CHORD_REPEAT_DECAY
#endif
#ifndef LEFT_PINKY_CHORD_REPEAT_DECAY
#define LEFT_PINKY_CHORD_REPEAT_DECAY PINKY_CHORD_REPEAT_DECAY
#endif
#ifndef RIGHT_PINKY_CHORD_REPEAT_DECAY
#define RIGHT_PINKY_CHORD_REPEAT_DECAY PINKY_CHORD_REPEAT_DECAY
#endif
#ifndef RING1_HOLDING_TYPE
#define RING1_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef RING1_CHORD_HOLDING_TYPE
#define RING1_CHORD_HOLDING_TYPE CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING1_CHORD_HOLDING_TYPE
#define LEFT_RING1_CHORD_HOLDING_TYPE RING1_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING1_CHORD_HOLDING_TYPE
#define RIGHT_RING1_CHORD_HOLDING_TYPE RING1_CHORD_HOLDING_TYPE
#endif
#ifndef RING1_HOLDING_TIME
#define RING1_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef RING1_CHORD_HOLDING_TIME
#define RING1_CHORD_HOLDING_TIME CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING1_CHORD_HOLDING_TIME
#define LEFT_RING1_CHORD_HOLDING_TIME RING1_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING1_CHORD_HOLDING_TIME
#define RIGHT_RING1_CHORD_HOLDING_TIME RING1_CHORD_HOLDING_TIME
#endif
#ifndef RING1_STREAK_DECAY
#define RING1_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef RING1_CHORD_STREAK_DECAY
#define RING1_CHORD_STREAK_DECAY CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING1_CHORD_STREAK_DECAY
#define LEFT_RING1_CHORD_STREAK_DECAY RING1_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING1_CHORD_STREAK_DECAY
#define RIGHT_RING1_CHORD_STREAK_DECAY RING1_CHORD_STREAK_DECAY
#endif
#ifndef RING1_REPEAT_DECAY
#define RING1_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef RING1_CHORD_REPEAT_DECAY
#define RING1_CHORD_REPEAT_DECAY CHORD_REPEAT_DECAY
#endif
#ifndef LEFT_RING1_CHORD_REPEAT_DECAY
#define LEFT_RING1_CHORD_REPEAT_DECAY RING1_CHORD_REPEAT_DECAY
#endif
#ifndef RIGHT_RING1_CHORD_REPEAT_DECAY
#define RIGHT_RING1_CHORD_REPEAT_DECAY RING1_CHORD_REPEAT_DECAY
#endif
#ifndef RING2_HOLDING_TYPE
#define RING2_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef RING2_CHORD_HOLDING_TYPE
#define RING2_CHORD_HOLDING_TYPE CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING2_CHORD_HOLDING_TYPE
#define LEFT_RING2_CHORD_HOLDING_TYPE RING2_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING2_CHORD_HOLDING_TYPE
#define RIGHT_RING2_CHORD_HOLDING_TYPE RING2_CHORD_HOLDING_TYPE
#endif
#ifndef RING2_HOLDING_TIME
#define RING2_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef RING2_CHORD_HOLDING_TIME
#define RING2_CHORD_HOLDING_TIME CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING2_CHORD_HOLDING_TIME
#define LEFT_RING2_CHORD_HOLDING_TIME RING2_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING2_CHORD_HOLDING_TIME
#define RIGHT_RING2_CHORD_HOLDING_TIME RING2_CHORD_HOLDING_TIME
#endif
#ifndef RING2_STREAK_DECAY
#define RING2_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef RING2_CHORD_STREAK_DECAY
#define RING2_CHORD_STREAK_DECAY CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING2_CHORD_STREAK_DECAY
#define LEFT_RING2_CHORD_STREAK_DECAY RING2_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING2_CHORD_STREAK_DECAY
#define RIGHT_RING2_CHORD_STREAK_DECAY RING2_CHORD_STREAK_DECAY
#endif
#ifndef RING2_REPEAT_DECAY
#define RING2_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef RING2_CHORD_REPEAT_DECAY
#define RING2_CHORD_REPEAT_DECAY CHORD_REPEAT_DECAY
#endif
#ifndef LEFT_RING2_CHORD_REPEAT_DECAY
#define LEFT_RING2_CHORD_REPEAT_DECAY RING2_CHORD_REPEAT_DECAY
#endif
#ifndef RIGHT_RING2_CHORD_REPEAT_DECAY
#define RIGHT_RING2_CHORD_REPEAT_DECAY RING2_CHORD_REPEAT_DECAY
#endif
#ifndef MIDDY_HOLDING_TYPE
#define MIDDY_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef MIDDY_CHORD_HOLDING_TYPE
#define MIDDY_CHORD_HOLDING_TYPE CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_MIDDY_CHORD_HOLDING_TYPE
#define LEFT_MIDDY_CHORD_HOLDING_TYPE MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_MIDDY_CHORD_HOLDING_TYPE
#define RIGHT_MIDDY_CHORD_HOLDING_TYPE MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef MIDDY_HOLDING_TIME
#define MIDDY_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef MIDDY_CHORD_HOLDING_TIME
#define MIDDY_CHORD_HOLDING_TIME CHORD_HOLDING_TIME
#endif
#ifndef LEFT_MIDDY_CHORD_HOLDING_TIME
#define LEFT_MIDDY_CHORD_HOLDING_TIME MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_MIDDY_CHORD_HOLDING_TIME
#define RIGHT_MIDDY_CHORD_HOLDING_TIME MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef MIDDY_STREAK_DECAY
#define MIDDY_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef MIDDY_CHORD_STREAK_DECAY
#define MIDDY_CHORD_STREAK_DECAY CHORD_STREAK_DECAY
#endif
#ifndef LEFT_MIDDY_CHORD_STREAK_DECAY
#define LEFT_MIDDY_CHORD_STREAK_DECAY MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_MIDDY_CHORD_STREAK_DECAY
#define RIGHT_MIDDY_CHORD_STREAK_DECAY MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef MIDDY_REPEAT_DECAY
#define MIDDY_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef MIDDY_CHORD_REPEAT_DECAY
#define MIDDY_CHORD_REPEAT_DECAY CHORD_REPEAT_DECAY
#endif
#ifndef LEFT_MIDDY_CHORD_REPEAT_DECAY
#define LEFT_MIDDY_CHORD_REPEAT_DECAY MIDDY_CHORD_REPEAT_DECAY
#endif
#ifndef RIGHT_MIDDY_CHORD_REPEAT_DECAY
#define RIGHT_MIDDY_CHORD_REPEAT_DECAY MIDDY_CHORD_REPEAT_DECAY
#endif
#ifndef INDEX_HOLDING_TYPE
#define INDEX_HOLDING_TYPE HOMEY_HOLDING_TYPE
#endif
#ifndef INDEX_CHORD_HOLDING_TYPE
#define INDEX_CHORD_HOLDING_TYPE CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_INDEX_CHORD_HOLDING_TYPE
#define LEFT_INDEX_CHORD_HOLDING_TYPE INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_INDEX_CHORD_HOLDING_TYPE
#define RIGHT_INDEX_CHORD_HOLDING_TYPE INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef INDEX_HOLDING_TIME
#define INDEX_HOLDING_TIME HOMEY_HOLDING_TIME
#endif
#ifndef INDEX_CHORD_HOLDING_TIME
#define INDEX_CHORD_HOLDING_TIME CHORD_HOLDING_TIME
#endif
#ifndef LEFT_INDEX_CHORD_HOLDING_TIME
#define LEFT_INDEX_CHORD_HOLDING_TIME INDEX_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_INDEX_CHORD_HOLDING_TIME
#define RIGHT_INDEX_CHORD_HOLDING_TIME INDEX_CHORD_HOLDING_TIME
#endif
#ifndef INDEX_STREAK_DECAY
#define INDEX_STREAK_DECAY HOMEY_STREAK_DECAY
#endif
#ifndef INDEX_CHORD_STREAK_DECAY
#define INDEX_CHORD_STREAK_DECAY CHORD_STREAK_DECAY
#endif
#ifndef LEFT_INDEX_CHORD_STREAK_DECAY
#define LEFT_INDEX_CHORD_STREAK_DECAY INDEX_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_INDEX_CHORD_STREAK_DECAY
#define RIGHT_INDEX_CHORD_STREAK_DECAY INDEX_CHORD_STREAK_DECAY
#endif
#ifndef INDEX_REPEAT_DECAY
#define INDEX_REPEAT_DECAY HOMEY_REPEAT_DECAY
#endif
#ifndef INDEX_CHORD_REPEAT_DECAY
#define INDEX_CHORD_REPEAT_DECAY CHORD_REPEAT_DECAY
#endif
#ifndef LEFT_INDEX_CHORD_REPEAT_DECAY
#define LEFT_INDEX_CHORD_REPEAT_DECAY INDEX_CHORD_REPEAT_DECAY
#endif
#ifndef RIGHT_INDEX_CHORD_REPEAT_DECAY
#define RIGHT_INDEX_CHORD_REPEAT_DECAY INDEX_CHORD_REPEAT_DECAY
#endif
#ifndef LEFT_PINKY_HOLDING_TYPE
#define LEFT_PINKY_HOLDING_TYPE PINKY_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_HOLDING_TIME
#define LEFT_PINKY_HOLDING_TIME PINKY_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_STREAK_DECAY
#define LEFT_PINKY_STREAK_DECAY PINKY_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_REPEAT_DECAY
#define LEFT_PINKY_REPEAT_DECAY PINKY_REPEAT_DECAY
#endif
    left_pinky: homey_left_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_pinky_bilateral: homey_left_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&left_pinky_hold>, <&kp>;
    };
    left_pinky_hold: homey_left_pinky_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftPinky
            , <&macro_press &mo LAYER_LeftPinky>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftPinky
            , <&macro_release &mo LAYER_LeftPinky>
            #endif
            ;
    };
    left_pinky_tap: homey_left_pinky_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp LEFT_PINKY_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define LeftPinky(key, layer_index) LeftPinky_unroll(layer_index) (key)
    #define LeftPinky_unroll(layer_index) LeftPinky_concat(LeftPinky_layer, layer_index)
    #define LeftPinky_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define left_pinky_layer0_variant left_pinky_bilateral
    #else
    #define left_pinky_layer0_variant left_pinky
    #endif
    #define LeftPinky_layer0(key) left_pinky_layer0_variant LEFT_PINKY_MOD key
    
#ifndef RIGHT_PINKY_HOLDING_TYPE
#define RIGHT_PINKY_HOLDING_TYPE PINKY_HOLDING_TYPE
#endif
#ifndef RIGHT_PINKY_HOLDING_TIME
#define RIGHT_PINKY_HOLDING_TIME PINKY_HOLDING_TIME
#endif
#ifndef RIGHT_PINKY_STREAK_DECAY
#define RIGHT_PINKY_STREAK_DECAY PINKY_STREAK_DECAY
#endif
#ifndef RIGHT_PINKY_REPEAT_DECAY
#define RIGHT_PINKY_REPEAT_DECAY PINKY_REPEAT_DECAY
#endif
    right_pinky: homey_right_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_pinky_bilateral: homey_right_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&right_pinky_hold>, <&kp>;
    };
    right_pinky_hold: homey_right_pinky_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightPinky
            , <&macro_press &mo LAYER_RightPinky>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightPinky
            , <&macro_release &mo LAYER_RightPinky>
            #endif
            ;
    };
    right_pinky_tap: homey_right_pinky_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp RIGHT_PINKY_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define RightPinky(key, layer_index) RightPinky_unroll(layer_index) (key)
    #define RightPinky_unroll(layer_index) RightPinky_concat(RightPinky_layer, layer_index)
    #define RightPinky_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define right_pinky_layer0_variant right_pinky_bilateral
    #else
    #define right_pinky_layer0_variant right_pinky
    #endif
    #define RightPinky_layer0(key) right_pinky_layer0_variant RIGHT_PINKY_MOD key
    
#ifndef LEFT_RING1_HOLDING_TYPE
#define LEFT_RING1_HOLDING_TYPE RING1_HOLDING_TYPE
#endif
#ifndef LEFT_RING1_HOLDING_TIME
#define LEFT_RING1_HOLDING_TIME RING1_HOLDING_TIME
#endif
#ifndef LEFT_RING1_STREAK_DECAY
#define LEFT_RING1_STREAK_DECAY RING1_STREAK_DECAY
#endif
#ifndef LEFT_RING1_REPEAT_DECAY
#define LEFT_RING1_REPEAT_DECAY RING1_REPEAT_DECAY
#endif
    left_ring1: homey_left_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring1_bilateral: homey_left_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&left_ring1_hold>, <&kp>;
    };
    left_ring1_hold: homey_left_ring1_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftRing1
            , <&macro_press &mo LAYER_LeftRing1>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftRing1
            , <&macro_release &mo LAYER_LeftRing1>
            #endif
            ;
    };
    left_ring1_tap: homey_left_ring1_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp LEFT_RING1_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define LeftRing1(key, layer_index) LeftRing1_unroll(layer_index) (key)
    #define LeftRing1_unroll(layer_index) LeftRing1_concat(LeftRing1_layer, layer_index)
    #define LeftRing1_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define left_ring1_layer0_variant left_ring1_bilateral
    #else
    #define left_ring1_layer0_variant left_ring1
    #endif
    #define LeftRing1_layer0(key) left_ring1_layer0_variant LEFT_RING1_MOD key
    
#ifndef RIGHT_RING1_HOLDING_TYPE
#define RIGHT_RING1_HOLDING_TYPE RING1_HOLDING_TYPE
#endif
#ifndef RIGHT_RING1_HOLDING_TIME
#define RIGHT_RING1_HOLDING_TIME RING1_HOLDING_TIME
#endif
#ifndef RIGHT_RING1_STREAK_DECAY
#define RIGHT_RING1_STREAK_DECAY RING1_STREAK_DECAY
#endif
#ifndef RIGHT_RING1_REPEAT_DECAY
#define RIGHT_RING1_REPEAT_DECAY RING1_REPEAT_DECAY
#endif
    right_ring1: homey_right_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring1_bilateral: homey_right_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&right_ring1_hold>, <&kp>;
    };
    right_ring1_hold: homey_right_ring1_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightRing1
            , <&macro_press &mo LAYER_RightRing1>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightRing1
            , <&macro_release &mo LAYER_RightRing1>
            #endif
            ;
    };
    right_ring1_tap: homey_right_ring1_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp RIGHT_RING1_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define RightRing1(key, layer_index) RightRing1_unroll(layer_index) (key)
    #define RightRing1_unroll(layer_index) RightRing1_concat(RightRing1_layer, layer_index)
    #define RightRing1_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define right_ring1_layer0_variant right_ring1_bilateral
    #else
    #define right_ring1_layer0_variant right_ring1
    #endif
    #define RightRing1_layer0(key) right_ring1_layer0_variant RIGHT_RING1_MOD key
    
#ifndef LEFT_RING2_HOLDING_TYPE
#define LEFT_RING2_HOLDING_TYPE RING2_HOLDING_TYPE
#endif
#ifndef LEFT_RING2_HOLDING_TIME
#define LEFT_RING2_HOLDING_TIME RING2_HOLDING_TIME
#endif
#ifndef LEFT_RING2_STREAK_DECAY
#define LEFT_RING2_STREAK_DECAY RING2_STREAK_DECAY
#endif
#ifndef LEFT_RING2_REPEAT_DECAY
#define LEFT_RING2_REPEAT_DECAY RING2_REPEAT_DECAY
#endif
    left_ring2: homey_left_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring2_bilateral: homey_left_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&left_ring2_hold>, <&kp>;
    };
    left_ring2_hold: homey_left_ring2_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftRing2
            , <&macro_press &mo LAYER_LeftRing2>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftRing2
            , <&macro_release &mo LAYER_LeftRing2>
            #endif
            ;
    };
    left_ring2_tap: homey_left_ring2_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp LEFT_RING2_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define LeftRing2(key, layer_index) LeftRing2_unroll(layer_index) (key)
    #define LeftRing2_unroll(layer_index) LeftRing2_concat(LeftRing2_layer, layer_index)
    #define LeftRing2_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define left_ring2_layer0_variant left_ring2_bilateral
    #else
    #define left_ring2_layer0_variant left_ring2
    #endif
    #define LeftRing2_layer0(key) left_ring2_layer0_variant LEFT_RING2_MOD key
    
#ifndef RIGHT_RING2_HOLDING_TYPE
#define RIGHT_RING2_HOLDING_TYPE RING2_HOLDING_TYPE
#endif
#ifndef RIGHT_RING2_HOLDING_TIME
#define RIGHT_RING2_HOLDING_TIME RING2_HOLDING_TIME
#endif
#ifndef RIGHT_RING2_STREAK_DECAY
#define RIGHT_RING2_STREAK_DECAY RING2_STREAK_DECAY
#endif
#ifndef RIGHT_RING2_REPEAT_DECAY
#define RIGHT_RING2_REPEAT_DECAY RING2_REPEAT_DECAY
#endif
    right_ring2: homey_right_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring2_bilateral: homey_right_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&right_ring2_hold>, <&kp>;
    };
    right_ring2_hold: homey_right_ring2_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightRing2
            , <&macro_press &mo LAYER_RightRing2>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightRing2
            , <&macro_release &mo LAYER_RightRing2>
            #endif
            ;
    };
    right_ring2_tap: homey_right_ring2_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp RIGHT_RING2_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define RightRing2(key, layer_index) RightRing2_unroll(layer_index) (key)
    #define RightRing2_unroll(layer_index) RightRing2_concat(RightRing2_layer, layer_index)
    #define RightRing2_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define right_ring2_layer0_variant right_ring2_bilateral
    #else
    #define right_ring2_layer0_variant right_ring2
    #endif
    #define RightRing2_layer0(key) right_ring2_layer0_variant RIGHT_RING2_MOD key
    
#ifndef LEFT_MIDDY_HOLDING_TYPE
#define LEFT_MIDDY_HOLDING_TYPE MIDDY_HOLDING_TYPE
#endif
#ifndef LEFT_MIDDY_HOLDING_TIME
#define LEFT_MIDDY_HOLDING_TIME MIDDY_HOLDING_TIME
#endif
#ifndef LEFT_MIDDY_STREAK_DECAY
#define LEFT_MIDDY_STREAK_DECAY MIDDY_STREAK_DECAY
#endif
#ifndef LEFT_MIDDY_REPEAT_DECAY
#define LEFT_MIDDY_REPEAT_DECAY MIDDY_REPEAT_DECAY
#endif
    left_middy: homey_left_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_middy_bilateral: homey_left_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&left_middy_hold>, <&kp>;
    };
    left_middy_hold: homey_left_middy_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftMiddy
            , <&macro_press &mo LAYER_LeftMiddy>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftMiddy
            , <&macro_release &mo LAYER_LeftMiddy>
            #endif
            ;
    };
    left_middy_tap: homey_left_middy_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp LEFT_MIDDY_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define LeftMiddy(key, layer_index) LeftMiddy_unroll(layer_index) (key)
    #define LeftMiddy_unroll(layer_index) LeftMiddy_concat(LeftMiddy_layer, layer_index)
    #define LeftMiddy_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define left_middy_layer0_variant left_middy_bilateral
    #else
    #define left_middy_layer0_variant left_middy
    #endif
    #define LeftMiddy_layer0(key) left_middy_layer0_variant LEFT_MIDDY_MOD key
    
#ifndef RIGHT_MIDDY_HOLDING_TYPE
#define RIGHT_MIDDY_HOLDING_TYPE MIDDY_HOLDING_TYPE
#endif
#ifndef RIGHT_MIDDY_HOLDING_TIME
#define RIGHT_MIDDY_HOLDING_TIME MIDDY_HOLDING_TIME
#endif
#ifndef RIGHT_MIDDY_STREAK_DECAY
#define RIGHT_MIDDY_STREAK_DECAY MIDDY_STREAK_DECAY
#endif
#ifndef RIGHT_MIDDY_REPEAT_DECAY
#define RIGHT_MIDDY_REPEAT_DECAY MIDDY_REPEAT_DECAY
#endif
    right_middy: homey_right_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_middy_bilateral: homey_right_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&right_middy_hold>, <&kp>;
    };
    right_middy_hold: homey_right_middy_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightMiddy
            , <&macro_press &mo LAYER_RightMiddy>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightMiddy
            , <&macro_release &mo LAYER_RightMiddy>
            #endif
            ;
    };
    right_middy_tap: homey_right_middy_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp RIGHT_MIDDY_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define RightMiddy(key, layer_index) RightMiddy_unroll(layer_index) (key)
    #define RightMiddy_unroll(layer_index) RightMiddy_concat(RightMiddy_layer, layer_index)
    #define RightMiddy_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define right_middy_layer0_variant right_middy_bilateral
    #else
    #define right_middy_layer0_variant right_middy
    #endif
    #define RightMiddy_layer0(key) right_middy_layer0_variant RIGHT_MIDDY_MOD key
    
#ifndef LEFT_INDEX_HOLDING_TYPE
#define LEFT_INDEX_HOLDING_TYPE INDEX_HOLDING_TYPE
#endif
#ifndef LEFT_INDEX_HOLDING_TIME
#define LEFT_INDEX_HOLDING_TIME INDEX_HOLDING_TIME
#endif
#ifndef LEFT_INDEX_STREAK_DECAY
#define LEFT_INDEX_STREAK_DECAY INDEX_STREAK_DECAY
#endif
#ifndef LEFT_INDEX_REPEAT_DECAY
#define LEFT_INDEX_REPEAT_DECAY INDEX_REPEAT_DECAY
#endif
    left_index: homey_left_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_index_bilateral: homey_left_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&left_index_hold>, <&kp>;
    };
    left_index_hold: homey_left_index_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftIndex
            , <&macro_press &mo LAYER_LeftIndex>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_LeftIndex
            , <&macro_release &mo LAYER_LeftIndex>
            #endif
            ;
    };
    left_index_tap: homey_left_index_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp LEFT_INDEX_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define LeftIndex(key, layer_index) LeftIndex_unroll(layer_index) (key)
    #define LeftIndex_unroll(layer_index) LeftIndex_concat(LeftIndex_layer, layer_index)
    #define LeftIndex_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define left_index_layer0_variant left_index_bilateral
    #else
    #define left_index_layer0_variant left_index
    #endif
    #define LeftIndex_layer0(key) left_index_layer0_variant LEFT_INDEX_MOD key
    
#ifndef RIGHT_INDEX_HOLDING_TYPE
#define RIGHT_INDEX_HOLDING_TYPE INDEX_HOLDING_TYPE
#endif
#ifndef RIGHT_INDEX_HOLDING_TIME
#define RIGHT_INDEX_HOLDING_TIME INDEX_HOLDING_TIME
#endif
#ifndef RIGHT_INDEX_STREAK_DECAY
#define RIGHT_INDEX_STREAK_DECAY INDEX_STREAK_DECAY
#endif
#ifndef RIGHT_INDEX_REPEAT_DECAY
#define RIGHT_INDEX_REPEAT_DECAY INDEX_REPEAT_DECAY
#endif
    right_index: homey_right_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_index_bilateral: homey_right_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&right_index_hold>, <&kp>;
    };
    right_index_hold: homey_right_index_hold {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightIndex
            , <&macro_press &mo LAYER_RightIndex>
            #endif
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            #ifdef LAYER_RightIndex
            , <&macro_release &mo LAYER_RightIndex>
            #endif
            ;
    };
    right_index_tap: homey_right_index_tap {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_release
                &kp LSFT &kp RSFT
                &kp LALT &kp RALT
                &kp LCTL &kp RCTL
                &kp LGUI &kp RGUI>
            , <&macro_tap &kp RIGHT_INDEX_KEY>
            , <&macro_param_1to1>
            , <&macro_tap &kp MACRO_PLACEHOLDER>
            ;
    };
    #define RightIndex(key, layer_index) RightIndex_unroll(layer_index) (key)
    #define RightIndex_unroll(layer_index) RightIndex_concat(RightIndex_layer, layer_index)
    #define RightIndex_concat(prefix, layer_index) prefix ## layer_index
    #ifdef ENFORCE_BILATERAL
    #define right_index_layer0_variant right_index_bilateral
    #else
    #define right_index_layer0_variant right_index
    #endif
    #define RightIndex_layer0(key) right_index_layer0_variant RIGHT_INDEX_MOD key
    
#ifndef LEFT_RING1_PINKY_HOLDING_TYPE
#define LEFT_RING1_PINKY_HOLDING_TYPE LEFT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING1_PINKY_HOLDING_TIME
#define LEFT_RING1_PINKY_HOLDING_TIME LEFT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING1_PINKY_STREAK_DECAY
#define LEFT_RING1_PINKY_STREAK_DECAY LEFT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING1_PINKY_REPEAT_DECAY
#define LEFT_RING1_PINKY_REPEAT_DECAY LEFT_RING1_CHORD_REPEAT_DECAY
#endif
    left_ring1_pinky: homey_left_ring1_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring1_pinky_bilateral: homey_left_ring1_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring1_tap>;
    };
    #define LeftRing1Pinky left_ring1_pinky_bilateral LEFT_PINKY_MOD LEFT_PINKY_KEY
#ifndef LEFT_RING2_PINKY_HOLDING_TYPE
#define LEFT_RING2_PINKY_HOLDING_TYPE LEFT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING2_PINKY_HOLDING_TIME
#define LEFT_RING2_PINKY_HOLDING_TIME LEFT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING2_PINKY_STREAK_DECAY
#define LEFT_RING2_PINKY_STREAK_DECAY LEFT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING2_PINKY_REPEAT_DECAY
#define LEFT_RING2_PINKY_REPEAT_DECAY LEFT_RING2_CHORD_REPEAT_DECAY
#endif
    left_ring2_pinky: homey_left_ring2_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring2_pinky_bilateral: homey_left_ring2_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring2_tap>;
    };
    #define LeftRing2Pinky left_ring2_pinky_bilateral LEFT_PINKY_MOD LEFT_PINKY_KEY
#ifndef LEFT_MIDDY_PINKY_HOLDING_TYPE
#define LEFT_MIDDY_PINKY_HOLDING_TYPE LEFT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_MIDDY_PINKY_HOLDING_TIME
#define LEFT_MIDDY_PINKY_HOLDING_TIME LEFT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_MIDDY_PINKY_STREAK_DECAY
#define LEFT_MIDDY_PINKY_STREAK_DECAY LEFT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_MIDDY_PINKY_REPEAT_DECAY
#define LEFT_MIDDY_PINKY_REPEAT_DECAY LEFT_MIDDY_CHORD_REPEAT_DECAY
#endif
    left_middy_pinky: homey_left_middy_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_middy_pinky_bilateral: homey_left_middy_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_middy_tap>;
    };
    #define LeftMiddyPinky left_middy_pinky_bilateral LEFT_PINKY_MOD LEFT_PINKY_KEY
#ifndef LEFT_INDEX_PINKY_HOLDING_TYPE
#define LEFT_INDEX_PINKY_HOLDING_TYPE LEFT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_INDEX_PINKY_HOLDING_TIME
#define LEFT_INDEX_PINKY_HOLDING_TIME LEFT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_INDEX_PINKY_STREAK_DECAY
#define LEFT_INDEX_PINKY_STREAK_DECAY LEFT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_INDEX_PINKY_REPEAT_DECAY
#define LEFT_INDEX_PINKY_REPEAT_DECAY LEFT_INDEX_CHORD_REPEAT_DECAY
#endif
    left_index_pinky: homey_left_index_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_index_pinky_bilateral: homey_left_index_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_index_tap>;
    };
    #define LeftIndexPinky left_index_pinky_bilateral LEFT_PINKY_MOD LEFT_PINKY_KEY
#ifndef RIGHT_RING1_PINKY_HOLDING_TYPE
#define RIGHT_RING1_PINKY_HOLDING_TYPE RIGHT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING1_PINKY_HOLDING_TIME
#define RIGHT_RING1_PINKY_HOLDING_TIME RIGHT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING1_PINKY_STREAK_DECAY
#define RIGHT_RING1_PINKY_STREAK_DECAY RIGHT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING1_PINKY_REPEAT_DECAY
#define RIGHT_RING1_PINKY_REPEAT_DECAY RIGHT_RING1_CHORD_REPEAT_DECAY
#endif
    right_ring1_pinky: homey_right_ring1_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring1_pinky_bilateral: homey_right_ring1_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring1_tap>;
    };
    #define RightRing1Pinky right_ring1_pinky_bilateral RIGHT_PINKY_MOD RIGHT_PINKY_KEY
#ifndef RIGHT_RING2_PINKY_HOLDING_TYPE
#define RIGHT_RING2_PINKY_HOLDING_TYPE RIGHT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING2_PINKY_HOLDING_TIME
#define RIGHT_RING2_PINKY_HOLDING_TIME RIGHT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING2_PINKY_STREAK_DECAY
#define RIGHT_RING2_PINKY_STREAK_DECAY RIGHT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING2_PINKY_REPEAT_DECAY
#define RIGHT_RING2_PINKY_REPEAT_DECAY RIGHT_RING2_CHORD_REPEAT_DECAY
#endif
    right_ring2_pinky: homey_right_ring2_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring2_pinky_bilateral: homey_right_ring2_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring2_tap>;
    };
    #define RightRing2Pinky right_ring2_pinky_bilateral RIGHT_PINKY_MOD RIGHT_PINKY_KEY
#ifndef RIGHT_MIDDY_PINKY_HOLDING_TYPE
#define RIGHT_MIDDY_PINKY_HOLDING_TYPE RIGHT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_MIDDY_PINKY_HOLDING_TIME
#define RIGHT_MIDDY_PINKY_HOLDING_TIME RIGHT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_MIDDY_PINKY_STREAK_DECAY
#define RIGHT_MIDDY_PINKY_STREAK_DECAY RIGHT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_MIDDY_PINKY_REPEAT_DECAY
#define RIGHT_MIDDY_PINKY_REPEAT_DECAY RIGHT_MIDDY_CHORD_REPEAT_DECAY
#endif
    right_middy_pinky: homey_right_middy_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_middy_pinky_bilateral: homey_right_middy_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_middy_tap>;
    };
    #define RightMiddyPinky right_middy_pinky_bilateral RIGHT_PINKY_MOD RIGHT_PINKY_KEY
#ifndef RIGHT_INDEX_PINKY_HOLDING_TYPE
#define RIGHT_INDEX_PINKY_HOLDING_TYPE RIGHT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_INDEX_PINKY_HOLDING_TIME
#define RIGHT_INDEX_PINKY_HOLDING_TIME RIGHT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_INDEX_PINKY_STREAK_DECAY
#define RIGHT_INDEX_PINKY_STREAK_DECAY RIGHT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_INDEX_PINKY_REPEAT_DECAY
#define RIGHT_INDEX_PINKY_REPEAT_DECAY RIGHT_INDEX_CHORD_REPEAT_DECAY
#endif
    right_index_pinky: homey_right_index_pinky {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_index_pinky_bilateral: homey_right_index_pinky_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_index_tap>;
    };
    #define RightIndexPinky right_index_pinky_bilateral RIGHT_PINKY_MOD RIGHT_PINKY_KEY
#ifndef LEFT_PINKY_RING1_HOLDING_TYPE
#define LEFT_PINKY_RING1_HOLDING_TYPE LEFT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_RING1_HOLDING_TIME
#define LEFT_PINKY_RING1_HOLDING_TIME LEFT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_RING1_STREAK_DECAY
#define LEFT_PINKY_RING1_STREAK_DECAY LEFT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_RING1_REPEAT_DECAY
#define LEFT_PINKY_RING1_REPEAT_DECAY LEFT_PINKY_CHORD_REPEAT_DECAY
#endif
    left_pinky_ring1: homey_left_pinky_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_pinky_ring1_bilateral: homey_left_pinky_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_pinky_tap>;
    };
    #define LeftPinkyRing1 left_pinky_ring1_bilateral LEFT_RING1_MOD LEFT_RING1_KEY
#ifndef LEFT_RING2_RING1_HOLDING_TYPE
#define LEFT_RING2_RING1_HOLDING_TYPE LEFT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING2_RING1_HOLDING_TIME
#define LEFT_RING2_RING1_HOLDING_TIME LEFT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING2_RING1_STREAK_DECAY
#define LEFT_RING2_RING1_STREAK_DECAY LEFT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING2_RING1_REPEAT_DECAY
#define LEFT_RING2_RING1_REPEAT_DECAY LEFT_RING2_CHORD_REPEAT_DECAY
#endif
    left_ring2_ring1: homey_left_ring2_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring2_ring1_bilateral: homey_left_ring2_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring2_tap>;
    };
    #define LeftRing2Ring1 left_ring2_ring1_bilateral LEFT_RING1_MOD LEFT_RING1_KEY
#ifndef LEFT_MIDDY_RING1_HOLDING_TYPE
#define LEFT_MIDDY_RING1_HOLDING_TYPE LEFT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_MIDDY_RING1_HOLDING_TIME
#define LEFT_MIDDY_RING1_HOLDING_TIME LEFT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_MIDDY_RING1_STREAK_DECAY
#define LEFT_MIDDY_RING1_STREAK_DECAY LEFT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_MIDDY_RING1_REPEAT_DECAY
#define LEFT_MIDDY_RING1_REPEAT_DECAY LEFT_MIDDY_CHORD_REPEAT_DECAY
#endif
    left_middy_ring1: homey_left_middy_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_middy_ring1_bilateral: homey_left_middy_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_middy_tap>;
    };
    #define LeftMiddyRing1 left_middy_ring1_bilateral LEFT_RING1_MOD LEFT_RING1_KEY
#ifndef LEFT_INDEX_RING1_HOLDING_TYPE
#define LEFT_INDEX_RING1_HOLDING_TYPE LEFT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_INDEX_RING1_HOLDING_TIME
#define LEFT_INDEX_RING1_HOLDING_TIME LEFT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_INDEX_RING1_STREAK_DECAY
#define LEFT_INDEX_RING1_STREAK_DECAY LEFT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_INDEX_RING1_REPEAT_DECAY
#define LEFT_INDEX_RING1_REPEAT_DECAY LEFT_INDEX_CHORD_REPEAT_DECAY
#endif
    left_index_ring1: homey_left_index_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_index_ring1_bilateral: homey_left_index_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_index_tap>;
    };
    #define LeftIndexRing1 left_index_ring1_bilateral LEFT_RING1_MOD LEFT_RING1_KEY
#ifndef RIGHT_PINKY_RING1_HOLDING_TYPE
#define RIGHT_PINKY_RING1_HOLDING_TYPE RIGHT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_PINKY_RING1_HOLDING_TIME
#define RIGHT_PINKY_RING1_HOLDING_TIME RIGHT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_PINKY_RING1_STREAK_DECAY
#define RIGHT_PINKY_RING1_STREAK_DECAY RIGHT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_PINKY_RING1_REPEAT_DECAY
#define RIGHT_PINKY_RING1_REPEAT_DECAY RIGHT_PINKY_CHORD_REPEAT_DECAY
#endif
    right_pinky_ring1: homey_right_pinky_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_pinky_ring1_bilateral: homey_right_pinky_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_pinky_tap>;
    };
    #define RightPinkyRing1 right_pinky_ring1_bilateral RIGHT_RING1_MOD RIGHT_RING1_KEY
#ifndef RIGHT_RING2_RING1_HOLDING_TYPE
#define RIGHT_RING2_RING1_HOLDING_TYPE RIGHT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING2_RING1_HOLDING_TIME
#define RIGHT_RING2_RING1_HOLDING_TIME RIGHT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING2_RING1_STREAK_DECAY
#define RIGHT_RING2_RING1_STREAK_DECAY RIGHT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING2_RING1_REPEAT_DECAY
#define RIGHT_RING2_RING1_REPEAT_DECAY RIGHT_RING2_CHORD_REPEAT_DECAY
#endif
    right_ring2_ring1: homey_right_ring2_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring2_ring1_bilateral: homey_right_ring2_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring2_tap>;
    };
    #define RightRing2Ring1 right_ring2_ring1_bilateral RIGHT_RING1_MOD RIGHT_RING1_KEY
#ifndef RIGHT_MIDDY_RING1_HOLDING_TYPE
#define RIGHT_MIDDY_RING1_HOLDING_TYPE RIGHT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_MIDDY_RING1_HOLDING_TIME
#define RIGHT_MIDDY_RING1_HOLDING_TIME RIGHT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_MIDDY_RING1_STREAK_DECAY
#define RIGHT_MIDDY_RING1_STREAK_DECAY RIGHT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_MIDDY_RING1_REPEAT_DECAY
#define RIGHT_MIDDY_RING1_REPEAT_DECAY RIGHT_MIDDY_CHORD_REPEAT_DECAY
#endif
    right_middy_ring1: homey_right_middy_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_middy_ring1_bilateral: homey_right_middy_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_middy_tap>;
    };
    #define RightMiddyRing1 right_middy_ring1_bilateral RIGHT_RING1_MOD RIGHT_RING1_KEY
#ifndef RIGHT_INDEX_RING1_HOLDING_TYPE
#define RIGHT_INDEX_RING1_HOLDING_TYPE RIGHT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_INDEX_RING1_HOLDING_TIME
#define RIGHT_INDEX_RING1_HOLDING_TIME RIGHT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_INDEX_RING1_STREAK_DECAY
#define RIGHT_INDEX_RING1_STREAK_DECAY RIGHT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_INDEX_RING1_REPEAT_DECAY
#define RIGHT_INDEX_RING1_REPEAT_DECAY RIGHT_INDEX_CHORD_REPEAT_DECAY
#endif
    right_index_ring1: homey_right_index_ring1 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_index_ring1_bilateral: homey_right_index_ring1_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_index_tap>;
    };
    #define RightIndexRing1 right_index_ring1_bilateral RIGHT_RING1_MOD RIGHT_RING1_KEY
#ifndef LEFT_PINKY_RING2_HOLDING_TYPE
#define LEFT_PINKY_RING2_HOLDING_TYPE LEFT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_RING2_HOLDING_TIME
#define LEFT_PINKY_RING2_HOLDING_TIME LEFT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_RING2_STREAK_DECAY
#define LEFT_PINKY_RING2_STREAK_DECAY LEFT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_RING2_REPEAT_DECAY
#define LEFT_PINKY_RING2_REPEAT_DECAY LEFT_PINKY_CHORD_REPEAT_DECAY
#endif
    left_pinky_ring2: homey_left_pinky_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_pinky_ring2_bilateral: homey_left_pinky_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_pinky_tap>;
    };
    #define LeftPinkyRing2 left_pinky_ring2_bilateral LEFT_RING2_MOD LEFT_RING2_KEY
#ifndef LEFT_RING1_RING2_HOLDING_TYPE
#define LEFT_RING1_RING2_HOLDING_TYPE LEFT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING1_RING2_HOLDING_TIME
#define LEFT_RING1_RING2_HOLDING_TIME LEFT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING1_RING2_STREAK_DECAY
#define LEFT_RING1_RING2_STREAK_DECAY LEFT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING1_RING2_REPEAT_DECAY
#define LEFT_RING1_RING2_REPEAT_DECAY LEFT_RING1_CHORD_REPEAT_DECAY
#endif
    left_ring1_ring2: homey_left_ring1_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring1_ring2_bilateral: homey_left_ring1_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring1_tap>;
    };
    #define LeftRing1Ring2 left_ring1_ring2_bilateral LEFT_RING2_MOD LEFT_RING2_KEY
#ifndef LEFT_MIDDY_RING2_HOLDING_TYPE
#define LEFT_MIDDY_RING2_HOLDING_TYPE LEFT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_MIDDY_RING2_HOLDING_TIME
#define LEFT_MIDDY_RING2_HOLDING_TIME LEFT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_MIDDY_RING2_STREAK_DECAY
#define LEFT_MIDDY_RING2_STREAK_DECAY LEFT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_MIDDY_RING2_REPEAT_DECAY
#define LEFT_MIDDY_RING2_REPEAT_DECAY LEFT_MIDDY_CHORD_REPEAT_DECAY
#endif
    left_middy_ring2: homey_left_middy_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_middy_ring2_bilateral: homey_left_middy_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_middy_tap>;
    };
    #define LeftMiddyRing2 left_middy_ring2_bilateral LEFT_RING2_MOD LEFT_RING2_KEY
#ifndef LEFT_INDEX_RING2_HOLDING_TYPE
#define LEFT_INDEX_RING2_HOLDING_TYPE LEFT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_INDEX_RING2_HOLDING_TIME
#define LEFT_INDEX_RING2_HOLDING_TIME LEFT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_INDEX_RING2_STREAK_DECAY
#define LEFT_INDEX_RING2_STREAK_DECAY LEFT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_INDEX_RING2_REPEAT_DECAY
#define LEFT_INDEX_RING2_REPEAT_DECAY LEFT_INDEX_CHORD_REPEAT_DECAY
#endif
    left_index_ring2: homey_left_index_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_index_ring2_bilateral: homey_left_index_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_index_tap>;
    };
    #define LeftIndexRing2 left_index_ring2_bilateral LEFT_RING2_MOD LEFT_RING2_KEY
#ifndef RIGHT_PINKY_RING2_HOLDING_TYPE
#define RIGHT_PINKY_RING2_HOLDING_TYPE RIGHT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_PINKY_RING2_HOLDING_TIME
#define RIGHT_PINKY_RING2_HOLDING_TIME RIGHT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_PINKY_RING2_STREAK_DECAY
#define RIGHT_PINKY_RING2_STREAK_DECAY RIGHT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_PINKY_RING2_REPEAT_DECAY
#define RIGHT_PINKY_RING2_REPEAT_DECAY RIGHT_PINKY_CHORD_REPEAT_DECAY
#endif
    right_pinky_ring2: homey_right_pinky_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_pinky_ring2_bilateral: homey_right_pinky_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_pinky_tap>;
    };
    #define RightPinkyRing2 right_pinky_ring2_bilateral RIGHT_RING2_MOD RIGHT_RING2_KEY
#ifndef RIGHT_RING1_RING2_HOLDING_TYPE
#define RIGHT_RING1_RING2_HOLDING_TYPE RIGHT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING1_RING2_HOLDING_TIME
#define RIGHT_RING1_RING2_HOLDING_TIME RIGHT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING1_RING2_STREAK_DECAY
#define RIGHT_RING1_RING2_STREAK_DECAY RIGHT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING1_RING2_REPEAT_DECAY
#define RIGHT_RING1_RING2_REPEAT_DECAY RIGHT_RING1_CHORD_REPEAT_DECAY
#endif
    right_ring1_ring2: homey_right_ring1_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring1_ring2_bilateral: homey_right_ring1_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring1_tap>;
    };
    #define RightRing1Ring2 right_ring1_ring2_bilateral RIGHT_RING2_MOD RIGHT_RING2_KEY
#ifndef RIGHT_MIDDY_RING2_HOLDING_TYPE
#define RIGHT_MIDDY_RING2_HOLDING_TYPE RIGHT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_MIDDY_RING2_HOLDING_TIME
#define RIGHT_MIDDY_RING2_HOLDING_TIME RIGHT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_MIDDY_RING2_STREAK_DECAY
#define RIGHT_MIDDY_RING2_STREAK_DECAY RIGHT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_MIDDY_RING2_REPEAT_DECAY
#define RIGHT_MIDDY_RING2_REPEAT_DECAY RIGHT_MIDDY_CHORD_REPEAT_DECAY
#endif
    right_middy_ring2: homey_right_middy_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_middy_ring2_bilateral: homey_right_middy_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_middy_tap>;
    };
    #define RightMiddyRing2 right_middy_ring2_bilateral RIGHT_RING2_MOD RIGHT_RING2_KEY
#ifndef RIGHT_INDEX_RING2_HOLDING_TYPE
#define RIGHT_INDEX_RING2_HOLDING_TYPE RIGHT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_INDEX_RING2_HOLDING_TIME
#define RIGHT_INDEX_RING2_HOLDING_TIME RIGHT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_INDEX_RING2_STREAK_DECAY
#define RIGHT_INDEX_RING2_STREAK_DECAY RIGHT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_INDEX_RING2_REPEAT_DECAY
#define RIGHT_INDEX_RING2_REPEAT_DECAY RIGHT_INDEX_CHORD_REPEAT_DECAY
#endif
    right_index_ring2: homey_right_index_ring2 {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_index_ring2_bilateral: homey_right_index_ring2_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_index_tap>;
    };
    #define RightIndexRing2 right_index_ring2_bilateral RIGHT_RING2_MOD RIGHT_RING2_KEY
#ifndef LEFT_PINKY_MIDDY_HOLDING_TYPE
#define LEFT_PINKY_MIDDY_HOLDING_TYPE LEFT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_MIDDY_HOLDING_TIME
#define LEFT_PINKY_MIDDY_HOLDING_TIME LEFT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_MIDDY_STREAK_DECAY
#define LEFT_PINKY_MIDDY_STREAK_DECAY LEFT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_MIDDY_REPEAT_DECAY
#define LEFT_PINKY_MIDDY_REPEAT_DECAY LEFT_PINKY_CHORD_REPEAT_DECAY
#endif
    left_pinky_middy: homey_left_pinky_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_pinky_middy_bilateral: homey_left_pinky_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_pinky_tap>;
    };
    #define LeftPinkyMiddy left_pinky_middy_bilateral LEFT_MIDDY_MOD LEFT_MIDDY_KEY
#ifndef LEFT_RING1_MIDDY_HOLDING_TYPE
#define LEFT_RING1_MIDDY_HOLDING_TYPE LEFT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING1_MIDDY_HOLDING_TIME
#define LEFT_RING1_MIDDY_HOLDING_TIME LEFT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING1_MIDDY_STREAK_DECAY
#define LEFT_RING1_MIDDY_STREAK_DECAY LEFT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING1_MIDDY_REPEAT_DECAY
#define LEFT_RING1_MIDDY_REPEAT_DECAY LEFT_RING1_CHORD_REPEAT_DECAY
#endif
    left_ring1_middy: homey_left_ring1_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring1_middy_bilateral: homey_left_ring1_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring1_tap>;
    };
    #define LeftRing1Middy left_ring1_middy_bilateral LEFT_MIDDY_MOD LEFT_MIDDY_KEY
#ifndef LEFT_RING2_MIDDY_HOLDING_TYPE
#define LEFT_RING2_MIDDY_HOLDING_TYPE LEFT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING2_MIDDY_HOLDING_TIME
#define LEFT_RING2_MIDDY_HOLDING_TIME LEFT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING2_MIDDY_STREAK_DECAY
#define LEFT_RING2_MIDDY_STREAK_DECAY LEFT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING2_MIDDY_REPEAT_DECAY
#define LEFT_RING2_MIDDY_REPEAT_DECAY LEFT_RING2_CHORD_REPEAT_DECAY
#endif
    left_ring2_middy: homey_left_ring2_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring2_middy_bilateral: homey_left_ring2_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring2_tap>;
    };
    #define LeftRing2Middy left_ring2_middy_bilateral LEFT_MIDDY_MOD LEFT_MIDDY_KEY
#ifndef LEFT_INDEX_MIDDY_HOLDING_TYPE
#define LEFT_INDEX_MIDDY_HOLDING_TYPE LEFT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_INDEX_MIDDY_HOLDING_TIME
#define LEFT_INDEX_MIDDY_HOLDING_TIME LEFT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_INDEX_MIDDY_STREAK_DECAY
#define LEFT_INDEX_MIDDY_STREAK_DECAY LEFT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_INDEX_MIDDY_REPEAT_DECAY
#define LEFT_INDEX_MIDDY_REPEAT_DECAY LEFT_INDEX_CHORD_REPEAT_DECAY
#endif
    left_index_middy: homey_left_index_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_index_middy_bilateral: homey_left_index_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <LEFT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_index_tap>;
    };
    #define LeftIndexMiddy left_index_middy_bilateral LEFT_MIDDY_MOD LEFT_MIDDY_KEY
#ifndef RIGHT_PINKY_MIDDY_HOLDING_TYPE
#define RIGHT_PINKY_MIDDY_HOLDING_TYPE RIGHT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_PINKY_MIDDY_HOLDING_TIME
#define RIGHT_PINKY_MIDDY_HOLDING_TIME RIGHT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_PINKY_MIDDY_STREAK_DECAY
#define RIGHT_PINKY_MIDDY_STREAK_DECAY RIGHT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_PINKY_MIDDY_REPEAT_DECAY
#define RIGHT_PINKY_MIDDY_REPEAT_DECAY RIGHT_PINKY_CHORD_REPEAT_DECAY
#endif
    right_pinky_middy: homey_right_pinky_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_pinky_middy_bilateral: homey_right_pinky_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_pinky_tap>;
    };
    #define RightPinkyMiddy right_pinky_middy_bilateral RIGHT_MIDDY_MOD RIGHT_MIDDY_KEY
#ifndef RIGHT_RING1_MIDDY_HOLDING_TYPE
#define RIGHT_RING1_MIDDY_HOLDING_TYPE RIGHT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING1_MIDDY_HOLDING_TIME
#define RIGHT_RING1_MIDDY_HOLDING_TIME RIGHT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING1_MIDDY_STREAK_DECAY
#define RIGHT_RING1_MIDDY_STREAK_DECAY RIGHT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING1_MIDDY_REPEAT_DECAY
#define RIGHT_RING1_MIDDY_REPEAT_DECAY RIGHT_RING1_CHORD_REPEAT_DECAY
#endif
    right_ring1_middy: homey_right_ring1_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring1_middy_bilateral: homey_right_ring1_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring1_tap>;
    };
    #define RightRing1Middy right_ring1_middy_bilateral RIGHT_MIDDY_MOD RIGHT_MIDDY_KEY
#ifndef RIGHT_RING2_MIDDY_HOLDING_TYPE
#define RIGHT_RING2_MIDDY_HOLDING_TYPE RIGHT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING2_MIDDY_HOLDING_TIME
#define RIGHT_RING2_MIDDY_HOLDING_TIME RIGHT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING2_MIDDY_STREAK_DECAY
#define RIGHT_RING2_MIDDY_STREAK_DECAY RIGHT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING2_MIDDY_REPEAT_DECAY
#define RIGHT_RING2_MIDDY_REPEAT_DECAY RIGHT_RING2_CHORD_REPEAT_DECAY
#endif
    right_ring2_middy: homey_right_ring2_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring2_middy_bilateral: homey_right_ring2_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring2_tap>;
    };
    #define RightRing2Middy right_ring2_middy_bilateral RIGHT_MIDDY_MOD RIGHT_MIDDY_KEY
#ifndef RIGHT_INDEX_MIDDY_HOLDING_TYPE
#define RIGHT_INDEX_MIDDY_HOLDING_TYPE RIGHT_INDEX_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_INDEX_MIDDY_HOLDING_TIME
#define RIGHT_INDEX_MIDDY_HOLDING_TIME RIGHT_INDEX_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_INDEX_MIDDY_STREAK_DECAY
#define RIGHT_INDEX_MIDDY_STREAK_DECAY RIGHT_INDEX_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_INDEX_MIDDY_REPEAT_DECAY
#define RIGHT_INDEX_MIDDY_REPEAT_DECAY RIGHT_INDEX_CHORD_REPEAT_DECAY
#endif
    right_index_middy: homey_right_index_middy {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_index_middy_bilateral: homey_right_index_middy_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_INDEX_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_INDEX_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_INDEX_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_INDEX_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_index_tap>;
    };
    #define RightIndexMiddy right_index_middy_bilateral RIGHT_MIDDY_MOD RIGHT_MIDDY_KEY
#ifndef LEFT_PINKY_INDEX_HOLDING_TYPE
#define LEFT_PINKY_INDEX_HOLDING_TYPE LEFT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_PINKY_INDEX_HOLDING_TIME
#define LEFT_PINKY_INDEX_HOLDING_TIME LEFT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_PINKY_INDEX_STREAK_DECAY
#define LEFT_PINKY_INDEX_STREAK_DECAY LEFT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_PINKY_INDEX_REPEAT_DECAY
#define LEFT_PINKY_INDEX_REPEAT_DECAY LEFT_PINKY_CHORD_REPEAT_DECAY
#endif
    left_pinky_index: homey_left_pinky_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_pinky_index_bilateral: homey_left_pinky_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_pinky_tap>;
    };
    #define LeftPinkyIndex left_pinky_index_bilateral LEFT_INDEX_MOD LEFT_INDEX_KEY
#ifndef LEFT_RING1_INDEX_HOLDING_TYPE
#define LEFT_RING1_INDEX_HOLDING_TYPE LEFT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING1_INDEX_HOLDING_TIME
#define LEFT_RING1_INDEX_HOLDING_TIME LEFT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING1_INDEX_STREAK_DECAY
#define LEFT_RING1_INDEX_STREAK_DECAY LEFT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING1_INDEX_REPEAT_DECAY
#define LEFT_RING1_INDEX_REPEAT_DECAY LEFT_RING1_CHORD_REPEAT_DECAY
#endif
    left_ring1_index: homey_left_ring1_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring1_index_bilateral: homey_left_ring1_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING1_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring1_tap>;
    };
    #define LeftRing1Index left_ring1_index_bilateral LEFT_INDEX_MOD LEFT_INDEX_KEY
#ifndef LEFT_RING2_INDEX_HOLDING_TYPE
#define LEFT_RING2_INDEX_HOLDING_TYPE LEFT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_RING2_INDEX_HOLDING_TIME
#define LEFT_RING2_INDEX_HOLDING_TIME LEFT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_RING2_INDEX_STREAK_DECAY
#define LEFT_RING2_INDEX_STREAK_DECAY LEFT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_RING2_INDEX_REPEAT_DECAY
#define LEFT_RING2_INDEX_REPEAT_DECAY LEFT_RING2_CHORD_REPEAT_DECAY
#endif
    left_ring2_index: homey_left_ring2_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_ring2_index_bilateral: homey_left_ring2_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_RING2_HOLDING_TIME>;
        quick-tap-ms = <LEFT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_ring2_tap>;
    };
    #define LeftRing2Index left_ring2_index_bilateral LEFT_INDEX_MOD LEFT_INDEX_KEY
#ifndef LEFT_MIDDY_INDEX_HOLDING_TYPE
#define LEFT_MIDDY_INDEX_HOLDING_TYPE LEFT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef LEFT_MIDDY_INDEX_HOLDING_TIME
#define LEFT_MIDDY_INDEX_HOLDING_TIME LEFT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef LEFT_MIDDY_INDEX_STREAK_DECAY
#define LEFT_MIDDY_INDEX_STREAK_DECAY LEFT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef LEFT_MIDDY_INDEX_REPEAT_DECAY
#define LEFT_MIDDY_INDEX_REPEAT_DECAY LEFT_MIDDY_CHORD_REPEAT_DECAY
#endif
    left_middy_index: homey_left_middy_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    left_middy_index_bilateral: homey_left_middy_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = LEFT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <RIGHT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <LEFT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <LEFT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <LEFT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&left_middy_tap>;
    };
    #define LeftMiddyIndex left_middy_index_bilateral LEFT_INDEX_MOD LEFT_INDEX_KEY
#ifndef RIGHT_PINKY_INDEX_HOLDING_TYPE
#define RIGHT_PINKY_INDEX_HOLDING_TYPE RIGHT_PINKY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_PINKY_INDEX_HOLDING_TIME
#define RIGHT_PINKY_INDEX_HOLDING_TIME RIGHT_PINKY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_PINKY_INDEX_STREAK_DECAY
#define RIGHT_PINKY_INDEX_STREAK_DECAY RIGHT_PINKY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_PINKY_INDEX_REPEAT_DECAY
#define RIGHT_PINKY_INDEX_REPEAT_DECAY RIGHT_PINKY_CHORD_REPEAT_DECAY
#endif
    right_pinky_index: homey_right_pinky_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_pinky_index_bilateral: homey_right_pinky_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_PINKY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_PINKY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_PINKY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_PINKY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_pinky_tap>;
    };
    #define RightPinkyIndex right_pinky_index_bilateral RIGHT_INDEX_MOD RIGHT_INDEX_KEY
#ifndef RIGHT_RING1_INDEX_HOLDING_TYPE
#define RIGHT_RING1_INDEX_HOLDING_TYPE RIGHT_RING1_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING1_INDEX_HOLDING_TIME
#define RIGHT_RING1_INDEX_HOLDING_TIME RIGHT_RING1_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING1_INDEX_STREAK_DECAY
#define RIGHT_RING1_INDEX_STREAK_DECAY RIGHT_RING1_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING1_INDEX_REPEAT_DECAY
#define RIGHT_RING1_INDEX_REPEAT_DECAY RIGHT_RING1_CHORD_REPEAT_DECAY
#endif
    right_ring1_index: homey_right_ring1_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring1_index_bilateral: homey_right_ring1_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING1_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING1_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING1_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING1_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring1_tap>;
    };
    #define RightRing1Index right_ring1_index_bilateral RIGHT_INDEX_MOD RIGHT_INDEX_KEY
#ifndef RIGHT_RING2_INDEX_HOLDING_TYPE
#define RIGHT_RING2_INDEX_HOLDING_TYPE RIGHT_RING2_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_RING2_INDEX_HOLDING_TIME
#define RIGHT_RING2_INDEX_HOLDING_TIME RIGHT_RING2_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_RING2_INDEX_STREAK_DECAY
#define RIGHT_RING2_INDEX_STREAK_DECAY RIGHT_RING2_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_RING2_INDEX_REPEAT_DECAY
#define RIGHT_RING2_INDEX_REPEAT_DECAY RIGHT_RING2_CHORD_REPEAT_DECAY
#endif
    right_ring2_index: homey_right_ring2_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_ring2_index_bilateral: homey_right_ring2_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_RING2_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_RING2_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_RING2_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_RING2_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_ring2_tap>;
    };
    #define RightRing2Index right_ring2_index_bilateral RIGHT_INDEX_MOD RIGHT_INDEX_KEY
#ifndef RIGHT_MIDDY_INDEX_HOLDING_TYPE
#define RIGHT_MIDDY_INDEX_HOLDING_TYPE RIGHT_MIDDY_CHORD_HOLDING_TYPE
#endif
#ifndef RIGHT_MIDDY_INDEX_HOLDING_TIME
#define RIGHT_MIDDY_INDEX_HOLDING_TIME RIGHT_MIDDY_CHORD_HOLDING_TIME
#endif
#ifndef RIGHT_MIDDY_INDEX_STREAK_DECAY
#define RIGHT_MIDDY_INDEX_STREAK_DECAY RIGHT_MIDDY_CHORD_STREAK_DECAY
#endif
#ifndef RIGHT_MIDDY_INDEX_REPEAT_DECAY
#define RIGHT_MIDDY_INDEX_REPEAT_DECAY RIGHT_MIDDY_CHORD_REPEAT_DECAY
#endif
    right_middy_index: homey_right_middy_index {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&kp>;
    };
    right_middy_index_bilateral: homey_right_middy_index_bilateral {
        compatible = "zmk,behavior-hold-tap";
        flavor = RIGHT_MIDDY_HOLDING_TYPE;
        hold-trigger-key-positions = <LEFT_HAND_KEYS THUMB_KEYS>;
        hold-trigger-on-release; // wait for other home row mods
        tapping-term-ms = <RIGHT_MIDDY_HOLDING_TIME>;
        quick-tap-ms = <RIGHT_MIDDY_REPEAT_DECAY>;
        require-prior-idle-ms = <RIGHT_MIDDY_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&kp>, <&right_middy_tap>;
    };
    #define RightMiddyIndex right_middy_index_bilateral RIGHT_INDEX_MOD RIGHT_INDEX_KEY

};
