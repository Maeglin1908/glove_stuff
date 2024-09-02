// NOTE: Use the `#define` settings below to customize this keymap!
// For example, here are the main optional features you can enable:
#define DIFFICULTY_LEVEL  0 // 0:custom, 1:easy -> 5:hard (see below)
#define ENFORCE_BILATERAL   // cancels single-handed home row mod+tap
#define WORLD_USE_COMPOSE   // use native Compose in place of Unicode
#define USE_NUMPAD_KEYCODES

#define LAYER_Base 0
#define LAYER_Typing 1
#define LAYER_LeftPinky 2
#define LAYER_LeftRing1 3
#define LAYER_LeftRing2 4
#define LAYER_LeftMiddy 5
#define LAYER_LeftIndex 6
#define LAYER_RightPinky 7
#define LAYER_RightRing1 8
#define LAYER_RightRing2 9
#define LAYER_RightMiddy 10
#define LAYER_RightIndex 11
#define LAYER_Cursor 12
#define LAYER_Number 13
#define LAYER_Function 14
#define LAYER_Emoji 15
#define LAYER_Symbol 16
#define LAYER_Mouse 17
#define LAYER_System 18
#define LAYER_World 19
#define LAYER_Gaming 20
#define LAYER_Factory 21
#define LAYER_Lower 22
#define LAYER_Magic 23

// TIP: Add more setting overrides here instead of editing them below.

//
// Keymap specific knowledge of the base layer's alpha + ZMK layout
//
#if defined(LAYER_Base) && LAYER_Base == 0
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
#define KEY_LH_C6R4 	0
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
#define KEY_LH_C6R5 	LSHFT
#define KEY_LH_C5R5 	Z
#define KEY_LH_C4R5 	X
#define KEY_LH_C3R5 	C
#define KEY_LH_C2R5 	V
#define KEY_LH_C1R5 	B
#define KEY_LH_T1 ESC
#define KEY_LH_T2 UP
#define KEY_LH_T3 DOWN
#define KEY_RH_T3 LEFT
#define KEY_RH_T2 RIGHT
#define KEY_RH_T1 ENTER
#define KEY_RH_C1R5 	N
#define KEY_RH_C2R5 	M
#define KEY_RH_C3R5 	COMMA
#define KEY_RH_C4R5 	DOT
#define KEY_RH_C5R5 	FSLH
#define KEY_RH_C6R5 	RSHFT
#define KEY_LH_C6R6 	0
#define KEY_LH_C5R6 HOME
#define KEY_LH_C4R6 PG_UP
#define KEY_LH_C3R6 PG_DN
#define KEY_LH_C2R6 END
#define KEY_LH_T4 BACKSPACE
#define KEY_LH_T5 DELETE
#define KEY_LH_T6 LSFT
#define KEY_RH_T6 LSFT
#define KEY_RH_T5 TAB
#define KEY_RH_T4 SPACE
#define KEY_RH_C2R6 LPAR
#define KEY_RH_C3R6 LBKT
#define KEY_RH_C4R6 RBKT
#define KEY_RH_C5R6 RPAR
#define KEY_RH_C6R6 0

#define KC_F1     KEY_LH_C6R1
#define KC_F2     KEY_LH_C5R1
#define KC_F3     KEY_LH_C4R1
#define KC_F4     KEY_LH_C3R1
#define KC_F5     KEY_LH_C2R1
#define KC_F6     KEY_RH_C2R1
#define KC_F7     KEY_RH_C3R1
#define KC_F8     KEY_RH_C4R1
#define KC_F9     KEY_RH_C5R1
#define KC_F10    KEY_RH_C6R1

#define KC_HASH   KEY_LH_C6R2
#define KC_N1     KEY_LH_C5R2
#define KC_N2     KEY_LH_C4R2
#define KC_N3     KEY_LH_C3R2
#define KC_N4     KEY_LH_C2R2
#define KC_N5     KEY_LH_C1R2
#define KC_N6     KEY_RH_C1R2
#define KC_N7     KEY_RH_C2R2
#define KC_N8     KEY_RH_C3R2
#define KC_N9     KEY_RH_C4R2
#define KC_N0     KEY_RH_C5R2
#define KC_DOLLAR KEY_RH_C6R2

#define KC_AT     KEY_LH_C6R3
#define KC_AGRAVE KEY_LH_C5R3
#define KC_J      KEY_LH_C4R3
#define KC_O      KEY_LH_C3R3
#define KC_ECUTE  KEY_LH_C2R3
#define KC_B      KEY_LH_C1R3
#define KC_F      KEY_RH_C1R3
#define KC_D      KEY_RH_C2R3
#define KC_L      KEY_RH_C3R3
#define KC_SQT    KEY_RH_C4R3
#define KC_Q      KEY_RH_C5R3
#define KC_X      KEY_RH_C6R3

#define KC_A      KEY_LH_C5R4
#define KC_I      KEY_LH_C4R4
#define KC_E      KEY_LH_C3R4
#define KC_U      KEY_LH_C2R4
#define KC_COMMA  KEY_LH_C1R4
#define KC_P      KEY_RH_C1R4
#define KC_T      KEY_RH_C2R4
#define KC_S      KEY_RH_C3R4
#define KC_R      KEY_RH_C4R4
#define KC_N      KEY_RH_C5R4
#define KC_CIRC   KEY_RH_C6R4

#define KC_K      KEY_LH_C5R5
#define KC_Y      KEY_LH_C4R5
#define KC_EGRAVE KEY_LH_C3R5
#define KC_DOT    KEY_LH_C2R5
#define KC_W      KEY_LH_C1R5
#define KC_G      KEY_RH_C1R5
#define KC_C      KEY_RH_C2R5
#define KC_M      KEY_RH_C3R5
#define KC_H      KEY_RH_C4R5
#define KC_V      KEY_RH_C5R5

#define KC_C_CED  KEY_RH_C3R6
#define KC_Z      KEY_RH_C4R6 

#endif


//////////////////////////////////////////////////////////////////////////////
//
// Sunaku's Keymap v36 -- "Glorious Engrammer"
// - https://github.com/sunaku/glove80-keymaps
//
//////////////////////////////////////////////////////////////////////////////

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
//#define OPERATING_SYSTEM 'M' // macos
#define OPERATING_SYSTEM 'W' // windows
#endif
#if OPERATING_SYSTEM == 'M'
    #define _C      LG
    #define _A_TAB  LGUI
    #define _G_TAB  LALT
    #define _REDO   _C(LS(KC_Z))
    #define _POWER  K_POWER
    #define _W      LA
    #define _HOME   _C(LEFT)
    #define _END    _C(RIGHT)
#else
    #define _C      LC
    #define _A_TAB  LALT
    #define _G_TAB  LGUI
    #define _REDO   _C(KC_Y)
    #define _POWER  C_POWER
    #define _W      _C
    #define _HOME   HOME
    #define _END    END
#endif
#define _SLEEP      C_SLEEP
#if OPERATING_SYSTEM == 'W'
    #define _LOCK   LG(KC_L)
#elif OPERATING_SYSTEM == 'M'
    #define _LOCK   _C(LC(KC_Q))
#elif OPERATING_SYSTEM == 'L'
    #define _LOCK   K_LOCK
#endif
#define _UNDO       _C(KC_Z)
#define _CUT        _C(KC_X)
#define _COPY       _C(KC_C)
#define _PASTE      _C(KC_V)
#define _FIND       _C(KC_F)
#define _FIND_NEXT  _C(KC_G)
#define _FIND_PREV  _C(LS(KC_G))
#define _URL_BAR    _C(KC_L)
#define _DOWNLOADS  _C(KC_J)
#define _SELECT_ALL _C(KC_A)
#define _FIND_REPL  _C(KC_H)


//
// USE_NUMPAD_KEYCODES puts `KP_*` keycodes into the Number layer.
//
#ifdef USE_NUMPAD_KEYCODES
#define _KP_N0 KP_N0
#define _KP_N1 KP_N1
#define _KP_N2 KP_N2
#define _KP_N3 KP_N3
#define _KP_N4 KP_N4
#define _KP_N5 KP_N5
#define _KP_N6 KP_N6
#define _KP_N7 KP_N7
#define _KP_N8 KP_N8
#define _KP_N9 KP_N9
#define _KP_PLUS KP_PLUS
#define _KP_MINUS KP_MINUS
#define _KP_ASTERISK KP_ASTERISK
#define _KP_SLASH KP_SLASH
#define _KP_COMMA KP_COMMA
#define _KP_DOT KP_DOT
#define _KP_EQUAL KP_EQUAL
#define _KP_ENTER KP_ENTER
#else
#define _KP_N0 N0
#define _KP_N1 N1
#define _KP_N2 N2
#define _KP_N3 N3
#define _KP_N4 N4
#define _KP_N5 N5
#define _KP_N6 N6
#define _KP_N7 N7
#define _KP_N8 N8
#define _KP_N9 N9
#define _KP_PLUS PLUS
#define _KP_MINUS MINUS
#define _KP_ASTERISK ASTERISK
#define _KP_SLASH SLASH
#define _KP_COMMA COMMA
#define _KP_DOT DOT
#define _KP_EQUAL EQUAL
#define _KP_ENTER ENTER
#endif

//
// Glove80 specific symbol overrides to support non "en-US" locales
//
#undef  AMPS
#define AMPS  LC(LS(KC_T))
#undef  AT
#define AT    NINUS
#undef  CARET
#define CARET LS(N6)
#undef  COLON
#define COLON LS(KC_COMMA)
#undef  DLLR
#define DLLR  LS(N4)
#undef  DQT
#define DQT   N3
#undef  EXCL
#define EXCL  LS(N1)
#undef  GT
#define GT    LC(LA(KC_J))
#undef  HASH
#define HASH  EQUAL
#undef  LBRC
#define LBRC  LC(LA(KC_D))
#undef  LBRK
#define LBRK  LC(LA(N9))
#undef  LPAR
#define LPAR  N9
#undef  LT
#define LT    LC(LA(KC_AGRAVE))
#undef  PIPE
#define PIPE  LS(BSLH)
#undef  PLUS
#define PLUS  LS(EQUAL)
#undef  PRCNT
#define PRCNT LS(N5)
#undef  QMARK
#define QMARK LS(FSLH)
#undef  RBRC
#define RBRC  LC(LA(KC_L))
#undef  RBRK
#define RBRK  LC(LA(N0))
#undef  RPAR
#define RPAR  N0
#undef  STAR
#define STAR  LS(N8)
#undef  TILDE
#define TILDE LS(GRAVE)
#undef  UNDER
#define UNDER LS(MINUS)

combos {
    compatible = "zmk,combos";

    //
    // COMBO_FIRING_DECAY defines how much time you have left (milliseconds)
    // after pressing the first key in a ZMK combo to finish the whole chord.
    //
    #ifndef COMBO_FIRING_DECAY
    #define COMBO_FIRING_DECAY 50
    #endif
    #ifdef LAYER_Gaming
    combo_gaming_layer_toggle {
        timeout-ms = <COMBO_FIRING_DECAY>;
        key-positions = <POS_LH_T3 POS_LH_T6>;
        bindings = <&tog LAYER_Gaming>;
        layers = <LAYER_Base LAYER_Gaming>;
    };
    #endif
    #ifdef _A_TAB
    combo_alt_tab_switcher {
        timeout-ms = <COMBO_FIRING_DECAY>;
        key-positions = <POS_LH_T4 POS_LH_T1>;
        bindings = <&mod_tab_chord _A_TAB LAYER_Cursor>;
        layers = <LAYER_Base>;
    };
    #endif

    combo_q {
        timeout-ms = <80>;
        key-positions = <29 30>;
        bindings = <&kp P>;
        layers = <LAYER_Base LAYER_Typing>;
    };
    combo_cedil {
        timeout-ms = <100>;
        key-positions = <59 60>;
        bindings = <&kp BSLH>;
        layers = <LAYER_Base LAYER_Typing>;
    };
    combo_z {
        timeout-ms = <100>;
        key-positions = <60 61>;
        bindings = <&kp RBKT>;
        layers = <LAYER_Base LAYER_Typing>;
    };
    combo_a {
        timeout-ms = <100>;
        key-positions = <25 26>;
        bindings = <&kp Q>;
        layers = <LAYER_Base LAYER_Typing>;
    };
};

behaviors {

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
      #if OPERATING_SYSTEM == 'M'
        #define PINKY_FINGER_MOD LCTL
      #else
        #define PINKY_FINGER_MOD LGUI
      #endif
    #endif
    #ifndef RING1_FINGER_MOD
    #define RING1_FINGER_MOD LALT
    #endif
    #ifndef RING2_FINGER_MOD
    #define RING2_FINGER_MOD RALT
    #endif
    #ifndef MIDDY_FINGER_MOD
      #if OPERATING_SYSTEM == 'M'
        #define MIDDY_FINGER_MOD LGUI
      #else
        #define MIDDY_FINGER_MOD LCTL
      #endif
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
    #define LeftPinky_layer1(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer2(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer3(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer4(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer5(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer6(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer7(key) left_pinky LEFT_PINKY_MOD key
    #define LeftPinky_layer8(key) left_pinky LEFT_PINKY_MOD key
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
    #define RightPinky_layer1(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer2(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer3(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer4(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer5(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer6(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer7(key) right_pinky RIGHT_PINKY_MOD key
    #define RightPinky_layer8(key) right_pinky RIGHT_PINKY_MOD key
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
    #define LeftRing1_layer1(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer2(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer3(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer4(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer5(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer6(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer7(key) left_ring1 LEFT_RING1_MOD key
    #define LeftRing1_layer8(key) left_ring1 LEFT_RING1_MOD key
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
    #define RightRing1_layer1(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer2(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer3(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer4(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer5(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer6(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer7(key) right_ring1 RIGHT_RING1_MOD key
    #define RightRing1_layer8(key) right_ring1 RIGHT_RING1_MOD key
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
    #define LeftRing2_layer1(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer2(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer3(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer4(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer5(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer6(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer7(key) left_ring2 LEFT_RING2_MOD key
    #define LeftRing2_layer8(key) left_ring2 LEFT_RING2_MOD key
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
    #define RightRing2_layer1(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer2(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer3(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer4(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer5(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer6(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer7(key) right_ring2 RIGHT_RING2_MOD key
    #define RightRing2_layer8(key) right_ring2 RIGHT_RING2_MOD key
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
    #define LeftMiddy_layer1(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer2(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer3(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer4(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer5(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer6(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer7(key) left_middy LEFT_MIDDY_MOD key
    #define LeftMiddy_layer8(key) left_middy LEFT_MIDDY_MOD key
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
    #define RightMiddy_layer1(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer2(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer3(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer4(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer5(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer6(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer7(key) right_middy RIGHT_MIDDY_MOD key
    #define RightMiddy_layer8(key) right_middy RIGHT_MIDDY_MOD key
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
    #define LeftIndex_layer1(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer2(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer3(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer4(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer5(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer6(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer7(key) left_index LEFT_INDEX_MOD key
    #define LeftIndex_layer8(key) left_index LEFT_INDEX_MOD key
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
    #define RightIndex_layer1(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer2(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer3(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer4(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer5(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer6(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer7(key) right_index RIGHT_INDEX_MOD key
    #define RightIndex_layer8(key) right_index RIGHT_INDEX_MOD key
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

    //
    // Key repetition access keys on the index fingers
    //
    plain: plain_typing_layer {
        compatible = "zmk,behavior-hold-tap";
        flavor = PLAIN_HOLDING_TYPE;
        tapping-term-ms = <PLAIN_HOLDING_TIME>;
        quick-tap-ms = <PLAIN_REPEAT_DECAY>; // enable repeat
        require-prior-idle-ms = <PLAIN_STREAK_DECAY>;
        #binding-cells = <2>;
        bindings = <&mo>, <&kp>;
        retro-tap; // tap on standalone hold
    };

    //
    // Thumb cluster hold-tap keys for Miryoku layers
    //
    thumb: thumb_layer_access {
        compatible = "zmk,behavior-hold-tap";
        flavor = THUMB_HOLDING_TYPE;
        tapping-term-ms = <THUMB_HOLDING_TIME>;
        quick-tap-ms = <THUMB_REPEAT_DECAY>; // enable repeat
        #binding-cells = <2>;
        bindings = <&mo>, <&kp>;
    };
    thumb_parang_left: thumb_layer_access_parang_left {
        compatible = "zmk,behavior-hold-tap";
        flavor = THUMB_HOLDING_TYPE;
        tapping-term-ms = <THUMB_HOLDING_TIME>;
        quick-tap-ms = <THUMB_REPEAT_DECAY>; // enable repeat
        #binding-cells = <2>;
        bindings = <&mo>, <&parang_left>;
    };
    thumb_lower_shift: lower_layer_or_sticky_shift {
        compatible = "zmk,behavior-hold-tap";
        flavor = "tap-preferred";
        tapping-term-ms = <THUMB_HOLDING_TIME>;
        #binding-cells = <2>;
        bindings = <&mo>, <&sticky_key_oneshot>;
    };
    space: thumb_layer_access_spacebar {
        compatible = "zmk,behavior-hold-tap";
        flavor = SPACE_HOLDING_TYPE;
        tapping-term-ms = <SPACE_HOLDING_TIME>;
        quick-tap-ms = <SPACE_REPEAT_DECAY>; // enable repeat
        #binding-cells = <2>;
        bindings = <&mo>, <&kp>;
    };

    //
    // Shift + LEFT_PARENTHESIS = LESS_THAN
    //
    parang_left: left_parenthesis_and_less_than {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&kp LPAR>, <&kp LT>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };

    //
    // Shift + RIGHT_PARENTHESIS = GREATER_THAN
    //
    parang_right: right_parenthesis_and_greater_than {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&kp RPAR>, <&kp GT>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };

    //
    // Shift + LEFT_BRACKET = LEFT_BRACE
    //
    brack_left: left_bracket_and_left_brace {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&kp LBRK>, <&kp LBRC>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };

    //
    // Shift + RIGHT_BRACKET = RIGHT_BRACE
    //
    brack_right: right_bracket_and_right_brace {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&kp RBRK>, <&kp RBRC>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };

    //////////////////////////////////////////////////////////////////////////
    //
    // &sk (sticky key) variant that is truly one-shot
    //
    //////////////////////////////////////////////////////////////////////////

    //
    // STICKY_1SHOT_DECAY defines how much time you have left (milliseconds)
    // after tapping a sticky key before it expires (won't apply to next tap).
    //
    #ifndef STICKY_1SHOT_DECAY
    #define STICKY_1SHOT_DECAY 500
    #endif

    sticky_key_oneshot: sticky_key_oneshot_macro {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_tap &sticky_key_quickrel MACRO_PLACEHOLDER>
            ;
    };
    sticky_key_quickrel: sticky_key_quick_release {
        compatible = "zmk,behavior-sticky-key";
        #binding-cells = <1>;
        bindings = <&kp>;
        release-after-ms = <STICKY_1SHOT_DECAY>;
        quick-release;
        ignore-modifiers;
    };

    //////////////////////////////////////////////////////////////////////////
    //
    // ZMK global overrides
    //
    //////////////////////////////////////////////////////////////////////////

    //
    // CapsWord - ported from Pascal Getreuer's extension for QMK
    // - https://zmk.dev/docs/behaviors/caps-word
    // - https://getreuer.info/posts/keyboards/caps-word/index.html
    //
    behavior_caps_word {
        continue-list = <
            UNDERSCORE MINUS
            BACKSPACE DELETE
            N1 N2 N3 N4 N5 N6 N7 N8 N9 N0
        >;
    };

};

macros {

    //
    // Linux Magic System Request Key - hold this down and type REISUB
    // - https://www.kernel.org/doc/html/latest/admin-guide/sysrq.html
    // - https://github.com/manna-harbour/miryoku/discussions/259
    //
    ZMK_MACRO(linux_magic_sysrq,
        wait-ms = <0>;
        tap-ms = <0>;
        bindings
            = <&macro_press &mo 0 &kp RALT>
            , <&macro_tap &kp PRINTSCREEN>
            , <&macro_pause_for_release>
            , <&macro_release &mo 0 &kp RALT>
            ;
    )

    //
    // Mod+Tab application switcher - hold this down to keep menu open
    //
    mod_tab: mod_tab_switcher {
        compatible = "zmk,behavior-macro-one-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <1>;
        bindings
            = <&macro_param_1to1>
            , <&macro_press &kp MACRO_PLACEHOLDER>
            , <&macro_tap &kp TAB>
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &kp MACRO_PLACEHOLDER>
            ;
    };
    mod_tab_chord: mod_tab_switcher_chord {
        compatible = "zmk,behavior-macro-two-param";
        wait-ms = <0>;
        tap-ms = <0>;
        #binding-cells = <2>;
        bindings
            = <&macro_param_2to1>
            , <&macro_press &mo MACRO_PLACEHOLDER>
            , <&macro_param_1to1>
            , <&macro_press &mod_tab MACRO_PLACEHOLDER>
            , <&macro_pause_for_release>
            , <&macro_param_1to1>
            , <&macro_release &mod_tab MACRO_PLACEHOLDER>
            , <&macro_param_2to1>
            , <&macro_release &mo MACRO_PLACEHOLDER>
            ;
    };

    //////////////////////////////////////////////////////////////////////////
    //
    // Approximation of Pascal Getreuer's Select Word macro from QMK
    // - https://getreuer.info/posts/keyboards/select-word/index.html
    //
    //////////////////////////////////////////////////////////////////////////

    //
    // SELECT_WORD_DELAY defines how long the macro waits (milliseconds)
    // after moving the cursor before it selects a word.  A larger delay
    // may allow the macro to move to the next word upon each invocation.
    //
    #ifndef SELECT_WORD_DELAY
    #define SELECT_WORD_DELAY 1
    #endif

    ZMK_MACRO(select_none,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp DOWN &kp UP &kp RIGHT &kp LEFT>;
    )

    //
    // select a word (jumps to next word upon each successive invocation)
    //
    select_word: select_word {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&select_word_right>, <&select_word_left>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };
    ZMK_MACRO(select_word_right,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp _W(RIGHT) &kp _W(LEFT) &kp _W(LS(RIGHT))>;
    )
    ZMK_MACRO(select_word_left,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp _W(LEFT) &kp _W(RIGHT) &kp _W(LS(LEFT))>;
    )

    //
    // extend current selection by one word
    //
    extend_word: extend_word {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&extend_word_right>, <&extend_word_left>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };
    ZMK_MACRO(extend_word_right,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp _W(LS(RIGHT))>;
    )
    ZMK_MACRO(extend_word_left,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp _W(LS(LEFT))>;
    )

    //
    // select current line
    //
    select_line: select_line {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&select_line_right>, <&select_line_left>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };
    ZMK_MACRO(select_line_right,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp _HOME &kp LS(_END)>;
    )
    ZMK_MACRO(select_line_left,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp _END &kp LS(_HOME)>;
    )

    //
    // extend current selection by one line
    //
    extend_line: extend_line {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&extend_line_right>, <&extend_line_left>;
        mods = <(MOD_LSFT|MOD_RSFT)>;
    };
    ZMK_MACRO(extend_line_right,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp LS(DOWN) &kp LS(_END)>;
    )
    ZMK_MACRO(extend_line_left,
        wait-ms = <SELECT_WORD_DELAY>;
        tap-ms = <SELECT_WORD_DELAY>;
        bindings = <&kp LS(UP) &kp LS(_HOME)>;
    )

    //////////////////////////////////////////////////////////////////////////
    //
    // World layer - international characters
    //
    //////////////////////////////////////////////////////////////////////////

    //
    // WORLD_USE_COMPOSE uses OS-native Compose keycodes instead of Unicode
    // for characters in the "localizing" section of the `world.yaml` file.
    //
    //#define WORLD_USE_COMPOSE

    //
    // UNICODE_TARGET_OS defines which operating system you're targeting
    // for the UNICODE() preprocessor macro to be used on, since each OS
    // has different shortcuts for typing Unicode characters as hexcodes.
    //
    // NOTE: You may need to enable Unicode hexadecimal input in your OS:
    // - (macOS) https://sevenseacat.net/posts/2018/unicode-in-qmk-on-osx/
    // - (Linux) https://help.ubuntu.com/stable/ubuntu-help/tips-specialchars.html.en#ctrlshiftu
    // - (Windows) https://github.com/samhocevar/wincompose
    //
    // Specifically, Windows users should be running the WinCompose tool,
    // which lets you type Unicode characters via hexadecimal codepoints.
    //
    #ifndef UNICODE_TARGET_OS
    #define UNICODE_TARGET_OS OPERATING_SYSTEM
    #endif

    //
    // UNICODE_TAP_DELAY defines how long the macro waits (milliseconds)
    // between keystrokes while inputting the Unicode codepoint shortcut.
    //
    #ifndef UNICODE_TAP_DELAY
    #define UNICODE_TAP_DELAY 1
    #endif

    //
    // UNICODE_SEQ_DELAY defines how long the macro waits (milliseconds)
    // between emitting Unicode codepoints in multi-codepoint characters.
    //
    #ifndef UNICODE_SEQ_DELAY
    #define UNICODE_SEQ_DELAY 10
    #endif

    #define UNICODE(name, ...) \
        ZMK_MACRO(name, \
            wait-ms = <UNICODE_TAP_DELAY>; \
            tap-ms = <UNICODE_TAP_DELAY>; \
            bindings = __VA_ARGS__; \
        )

    //
    // UNICODE_SEQ_LINUX() specifies how Unicode hexadecimal codepoint
    // keystrokes are transformed into Unicode characters under Linux.
    //
    #ifndef UNICODE_SEQ_LINUX
    #define UNICODE_SEQ_LINUX(keystrokes) \
        <&macro_tap &kp LC(LS(U)) keystrokes &kp ENTER>
    #endif

    //
    // UNICODE_SEQ_MACOS() specifies how Unicode hexadecimal codepoint
    // keystrokes are transformed into Unicode characters under macOS.
    //
    #ifndef UNICODE_SEQ_MACOS
    #define UNICODE_SEQ_MACOS(keystrokes) \
        <&macro_press &kp LALT> ,\
        <&macro_tap keystrokes> ,\
        <&macro_release &kp LALT>
    #endif

    //
    // UNICODE_SEQ_WINDOWS() specifies how Unicode hexadecimal codepoint
    // keystrokes are transformed into Unicode characters under Windows.
    //
    // If you've configured WinCompose to use a different trigger hotkey,
    // such as F13 instead of the default RA(U) shortcut, simply override
    // this definition to adapt all UNICODE() function calls accordingly.
    //
    #ifndef UNICODE_SEQ_WINDOWS
    #define UNICODE_SEQ_WINDOWS(keystrokes) \
        <&macro_tap &kp RALT &kp U keystrokes &kp ENTER>
    #endif

    //
    // COMPOSE_KEY_LINUX specifies the keycode for Compose key in Linux,
    // which may be RALT by default but can be reconfigured as follows:
    //
    // $ setxkbmap -option compose:sclk # use ScrollLock as Compose key
    //
    // See xkeyboard-config(7) for possible choices for the Compose key:
    // https://manpages.debian.org/stable/xkb-data/xkeyboard-config.7.en.html#Position_of_Compose_key
    //
    // #define COMPOSE_KEY_LINUX RALT            // compose:ralt
    // #define COMPOSE_KEY_LINUX LGUI            // compose:lwin
    // #define COMPOSE_KEY_LINUX RA(LGUI)        // compose:lwin-altgr
    // #define COMPOSE_KEY_LINUX RGUI            // compose:rwin
    // #define COMPOSE_KEY_LINUX RA(RGUI)        // compose:rwin-altgr
    // #define COMPOSE_KEY_LINUX K_MENU          // compose:menu
    // #define COMPOSE_KEY_LINUX RA(K_MENU)      // compose:menu-altgr
    // #define COMPOSE_KEY_LINUX LCTL            // compose:lctrl
    // #define COMPOSE_KEY_LINUX RA(LCTL)        // compose:lctrl-altgr
    // #define COMPOSE_KEY_LINUX RCTL            // compose:rctrl
    // #define COMPOSE_KEY_LINUX RA(RCTL)        // compose:rctrl-altgr
    // #define COMPOSE_KEY_LINUX CAPS            // compose:caps
    // #define COMPOSE_KEY_LINUX RA(CAPS)        // compose:caps-altgr
    // #define COMPOSE_KEY_LINUX NON_US_BSLH     // compose:102
    // #define COMPOSE_KEY_LINUX RA(NON_US_BSLH) // compose:102-altgr
    // #define COMPOSE_KEY_LINUX PAUSE_BREAK     // compose:paus
    // #define COMPOSE_KEY_LINUX PSCRN           // compose:prsc
    // #define COMPOSE_KEY_LINUX SLCK            // compose:sclk
    //
    #ifndef COMPOSE_KEY_LINUX
    #define COMPOSE_KEY_LINUX RALT
    #endif

    //
    // COMPOSE_SEQ_LINUX() prefixes keystrokes with the Linux Compose key.
    //
    #ifndef COMPOSE_SEQ_LINUX
    #define COMPOSE_SEQ_LINUX(keystrokes) \
        <&macro_tap &kp COMPOSE_KEY_LINUX keystrokes>
    #endif

    //
    // COMPOSE_SEQ_MACOS() formats keystrokes for macOS character entry.
    //
    #ifndef COMPOSE_SEQ_MACOS
    #define COMPOSE_SEQ_MACOS(keystrokes) \
        <&macro_tap keystrokes>
    #endif

    //
    // COMPOSE_SEQ_WINDOWS() wraps keystrokes in Windows AltCode sequence.
    //
    #ifndef COMPOSE_SEQ_WINDOWS
    #define COMPOSE_SEQ_WINDOWS(keystrokes) \
        <&macro_press &kp LALT>, \
        <&macro_tap keystrokes>, \
        <&macro_release &kp LALT>
    #endif
    #if UNICODE_TARGET_OS == 'L'
        #define UNICODE_MORPH_MODS (MOD_LCTL|MOD_LSFT)
    #elif UNICODE_TARGET_OS == 'M'
        #define UNICODE_MORPH_MODS MOD_LALT
    #elif UNICODE_TARGET_OS == 'W'
        #define UNICODE_MORPH_MODS MOD_RALT
    #endif
    #if UNICODE_TARGET_OS == 'L'
        // $ grep "compose:" /usr/share/X11/xkb/rules/base.lst
        // compose:ralt         Right Alt
        #if COMPOSE_KEY_LINUX == RALT
            #define COMPOSE_MORPH_MODS MOD_RALT
        // compose:lwin         Left Win
        #elif COMPOSE_KEY_LINUX == LGUI
            #define COMPOSE_MORPH_MODS MOD_LGUI
        // compose:lwin-altgr   3rd level of Left Win
        #elif COMPOSE_KEY_LINUX == RA(LGUI)
            #define COMPOSE_MORPH_MODS (MOD_LGUI|MOD_RALT)
        // compose:rwin         Right Win
        #elif COMPOSE_KEY_LINUX == RGUI
            #define COMPOSE_MORPH_MODS MOD_RGUI
        // compose:rwin-altgr   3rd level of Right Win
        #elif COMPOSE_KEY_LINUX == RA(RGUI)
            #define COMPOSE_MORPH_MODS (MOD_RGUI|MOD_RALT)
        // compose:menu         Menu
        // compose:menu-altgr   3rd level of Menu
        #elif COMPOSE_KEY_LINUX == RA(K_MENU)
            #define COMPOSE_MORPH_MODS MOD_RALT
        // compose:lctrl        Left Ctrl
        #elif COMPOSE_KEY_LINUX == LCTL
            #define COMPOSE_MORPH_MODS MOD_LCTL
        // compose:lctrl-altgr  3rd level of Left Ctrl
        #elif COMPOSE_KEY_LINUX == RA(LCTL)
            #define COMPOSE_MORPH_MODS (MOD_LCTL|MOD_RALT)
        // compose:rctrl        Right Ctrl
        #elif COMPOSE_KEY_LINUX == RCTL
            #define COMPOSE_MORPH_MODS MOD_RCTL
        // compose:rctrl-altgr  3rd level of Right Ctrl
        #elif COMPOSE_KEY_LINUX == RA(RCTL)
            #define COMPOSE_MORPH_MODS (MOD_RCTL|MOD_RALT)
        // compose:caps         Caps Lock
        // compose:caps-altgr   3rd level of Caps Lock
        #elif COMPOSE_KEY_LINUX == RA(CAPS)
            #define COMPOSE_MORPH_MODS MOD_RALT
        // compose:102          The "&lt; &gt;" key
        // compose:102-altgr    3rd level of the "&lt; &gt;" key
        #elif COMPOSE_KEY_LINUX == RA(NON_US_BSLH)
            #define COMPOSE_MORPH_MODS MOD_RALT
        // compose:paus         Pause
        // compose:prsc         PrtSc
        // compose:sclk         Scroll Lock
        #else
            #define COMPOSE_MORPH_MODS 0
        #endif
    #elif UNICODE_TARGET_OS == 'M'
        #define COMPOSE_MORPH_MODS 0
    #elif UNICODE_TARGET_OS == 'W'
        #define COMPOSE_MORPH_MODS MOD_LALT
    #endif


    //
    // NOTE: edit the world.yaml file and run `rake` to generate this:
    //

    //
    // codepoints
    //
    UNICODE(world_degree_sign_macro, /* ° */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_degree_sign
        COMPOSE_SEQ_LINUX(&kp O &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp B &kp N0)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_degree_sign
        COMPOSE_SEQ_MACOS(&kp LA(LS(N8)))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp N0)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_degree_sign
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N7 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp N0)
        #endif
      #endif
    )
    world_degree_sign: world_degree_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_degree_sign_macro>, <&world_degree_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_degree_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_section_sign_macro, /* § */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_section_sign
        COMPOSE_SEQ_LINUX(&kp S &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp A &kp N7)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_section_sign
        COMPOSE_SEQ_MACOS(&kp LA(N6))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp N7)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_section_sign
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N6 &kp KP_N7)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp N7)
        #endif
      #endif
    )
    world_section_sign: world_section_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_section_sign_macro>, <&world_section_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_section_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_paragraph_sign_macro, /* ¶ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_paragraph_sign
        COMPOSE_SEQ_LINUX(&kp P &kp EXCL)
        #else
        UNICODE_SEQ_LINUX(&kp B &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_paragraph_sign
        COMPOSE_SEQ_MACOS(&kp LA(N7))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_paragraph_sign
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N8 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp N6)
        #endif
      #endif
    )
    world_paragraph_sign: world_paragraph_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_paragraph_sign_macro>, <&world_paragraph_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_paragraph_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_ordinal_macro, /* º */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_ordinal
        COMPOSE_SEQ_LINUX(&kp CARET &kp UNDER &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp B &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_ordinal
        COMPOSE_SEQ_MACOS(&kp LA(N0))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_ordinal
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N8 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp A)
        #endif
      #endif
    )
    world_o_ordinal: world_o_ordinal {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_ordinal_macro>, <&world_o_ordinal_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_ordinal
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_ordinal_macro, /* ª */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ordinal
        COMPOSE_SEQ_LINUX(&kp CARET &kp UNDER &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp A &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ordinal
        COMPOSE_SEQ_MACOS(&kp LA(N9))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ordinal
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N7 &kp KP_N0)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp A)
        #endif
      #endif
    )
    world_a_ordinal: world_a_ordinal {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_ordinal_macro>, <&world_a_ordinal_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_ordinal
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_exclaim_left_macro, /* ¡ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp A &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_exclaim_left
        COMPOSE_SEQ_MACOS(&kp LA(N1))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_exclaim_left
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N6 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp N1)
        #endif
      #endif
    )
    world_exclaim_left: world_exclaim_left {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_exclaim_left_macro>, <&world_exclaim_left_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_exclaim_left
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_question_left_macro, /* ¿ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_question_left
        COMPOSE_SEQ_LINUX(&kp EXCL &kp EXCL)
        #else
        UNICODE_SEQ_LINUX(&kp B &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_question_left
        COMPOSE_SEQ_MACOS(&kp LA(LS(FSLH)))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_question_left
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp F)
        #endif
      #endif
    )
    world_question_left: world_question_left {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_question_left_macro>, <&world_question_left_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_question_left
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_crypto_macro, /* ₿ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp B &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp B &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp B &kp F)
      #endif
    )
    world_currency_crypto: world_currency_crypto {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_crypto_macro>, <&world_currency_crypto_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_crypto
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_cent_macro, /* ¢ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp A &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp N2)
      #endif
    )
    world_currency_cent: world_currency_cent {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_cent_macro>, <&world_currency_cent_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_cent
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_sign_macro, /* ¤ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp A &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp N4)
      #endif
    )
    world_currency_sign: world_currency_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_sign_macro>, <&world_currency_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_micro_sign_macro, /* µ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_micro_sign
        COMPOSE_SEQ_LINUX(&kp M &kp U)
        #else
        UNICODE_SEQ_LINUX(&kp B &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_micro_sign
        COMPOSE_SEQ_MACOS(&kp LA(M))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_micro_sign
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N8 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp N5)
        #endif
      #endif
    )
    world_micro_sign: world_micro_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_micro_sign_macro>, <&world_micro_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_micro_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };

    //
    // characters
    //
    UNICODE(world_i_acute_lower_macro, /* í */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_acute_lower
        COMPOSE_SEQ_LINUX(&kp SQT &kp I)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_acute_lower
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp I)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_acute_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N7)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp D)
        #endif
      #endif
    )
    world_i_acute_lower: world_i_acute_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_acute_lower_macro>, <&world_i_acute_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_acute_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_i_acute_upper_macro, /* Í */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_acute_upper
        COMPOSE_SEQ_LINUX(&kp SQT &kp LS(I))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_acute_upper
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp LS(I))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_acute_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N5)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp D)
        #endif
      #endif
    )
    world_i_acute_upper: world_i_acute_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_acute_upper_macro>, <&world_i_acute_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_acute_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_i_acute: world_i_acute {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_acute_lower>, <&world_i_acute_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_i_diaeresis_lower_macro, /* ï */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_diaeresis_lower
        COMPOSE_SEQ_LINUX(&kp DQT &kp I)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_diaeresis_lower
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp I)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_diaeresis_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp F)
        #endif
      #endif
    )
    world_i_diaeresis_lower: world_i_diaeresis_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_diaeresis_lower_macro>, <&world_i_diaeresis_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_diaeresis_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_i_diaeresis_upper_macro, /* Ï */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_diaeresis_upper
        COMPOSE_SEQ_LINUX(&kp DQT &kp LS(I))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_diaeresis_upper
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp LS(I))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_diaeresis_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N7)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp F)
        #endif
      #endif
    )
    world_i_diaeresis_upper: world_i_diaeresis_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_diaeresis_upper_macro>, <&world_i_diaeresis_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_diaeresis_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_i_diaeresis: world_i_diaeresis {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_diaeresis_lower>, <&world_i_diaeresis_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_i_circumflex_lower_macro, /* î */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_circumflex_lower
        COMPOSE_SEQ_LINUX(&kp CARET &kp I)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp E)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_circumflex_lower
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp I)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp E)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_circumflex_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N8)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp E)
        #endif
      #endif
    )
    world_i_circumflex_lower: world_i_circumflex_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_circumflex_lower_macro>, <&world_i_circumflex_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_circumflex_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_i_circumflex_upper_macro, /* Î */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_circumflex_upper
        COMPOSE_SEQ_LINUX(&kp CARET &kp LS(I))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp E)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_circumflex_upper
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp LS(I))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp E)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_circumflex_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp E)
        #endif
      #endif
    )
    world_i_circumflex_upper: world_i_circumflex_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_circumflex_upper_macro>, <&world_i_circumflex_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_circumflex_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_i_circumflex: world_i_circumflex {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_circumflex_lower>, <&world_i_circumflex_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_i_grave_lower_macro, /* ì */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_grave_lower
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp I)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_grave_lower
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp I)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_grave_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp C)
        #endif
      #endif
    )
    world_i_grave_lower: world_i_grave_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_grave_lower_macro>, <&world_i_grave_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_grave_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_i_grave_upper_macro, /* Ì */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_grave_upper
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp LS(I))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_grave_upper
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp LS(I))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_i_grave_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp C)
        #endif
      #endif
    )
    world_i_grave_upper: world_i_grave_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_grave_upper_macro>, <&world_i_grave_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_i_grave_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_i_grave: world_i_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_grave_lower>, <&world_i_grave_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_e_acute_lower_macro, /* é */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_acute_lower
        COMPOSE_SEQ_LINUX(&kp SQT &kp E)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_acute_lower
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp E)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_acute_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N9)
        #endif
      #endif
    )
    world_e_acute_lower: world_e_acute_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_acute_lower_macro>, <&world_e_acute_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_acute_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_e_acute_upper_macro, /* É */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_acute_upper
        COMPOSE_SEQ_LINUX(&kp SQT &kp LS(E))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_acute_upper
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp LS(E))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_acute_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N9)
        #endif
      #endif
    )
    world_e_acute_upper: world_e_acute_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_acute_upper_macro>, <&world_e_acute_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_acute_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_e_acute: world_e_acute {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_acute_lower>, <&world_e_acute_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_e_diaeresis_lower_macro, /* ë */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_diaeresis_lower
        COMPOSE_SEQ_LINUX(&kp DQT &kp E)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_diaeresis_lower
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp E)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_diaeresis_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N5)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp B)
        #endif
      #endif
    )
    world_e_diaeresis_lower: world_e_diaeresis_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_diaeresis_lower_macro>, <&world_e_diaeresis_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_diaeresis_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_e_diaeresis_upper_macro, /* Ë */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_diaeresis_upper
        COMPOSE_SEQ_LINUX(&kp DQT &kp LS(E))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_diaeresis_upper
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp LS(E))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_diaeresis_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp B)
        #endif
      #endif
    )
    world_e_diaeresis_upper: world_e_diaeresis_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_diaeresis_upper_macro>, <&world_e_diaeresis_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_diaeresis_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_e_diaeresis: world_e_diaeresis {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_diaeresis_lower>, <&world_e_diaeresis_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_e_circumflex_lower_macro, /* ê */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_circumflex_lower
        COMPOSE_SEQ_LINUX(&kp CARET &kp E)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_circumflex_lower
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp E)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_circumflex_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N4)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp A)
        #endif
      #endif
    )
    world_e_circumflex_lower: world_e_circumflex_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_circumflex_lower_macro>, <&world_e_circumflex_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_circumflex_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_e_circumflex_upper_macro, /* Ê */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_circumflex_upper
        COMPOSE_SEQ_LINUX(&kp CARET &kp LS(E))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_circumflex_upper
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp LS(E))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_circumflex_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp A)
        #endif
      #endif
    )
    world_e_circumflex_upper: world_e_circumflex_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_circumflex_upper_macro>, <&world_e_circumflex_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_circumflex_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_e_circumflex: world_e_circumflex {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_circumflex_lower>, <&world_e_circumflex_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_e_grave_lower_macro, /* è */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_grave_lower
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp E)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_grave_lower
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp E)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_grave_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N8)
        #endif
      #endif
    )
    world_e_grave_lower: world_e_grave_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_grave_lower_macro>, <&world_e_grave_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_grave_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_e_grave_upper_macro, /* È */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_grave_upper
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp LS(E))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_grave_upper
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp LS(E))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_grave_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N0)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N8)
        #endif
      #endif
    )
    world_e_grave_upper: world_e_grave_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_grave_upper_macro>, <&world_e_grave_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_grave_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_e_grave: world_e_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_grave_lower>, <&world_e_grave_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_e_ae_lower_macro, /* æ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_ae_lower
        COMPOSE_SEQ_LINUX(&kp A &kp E)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_ae_lower
        COMPOSE_SEQ_MACOS(&kp LA(SQT))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_ae_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N0)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N6)
        #endif
      #endif
    )
    world_e_ae_lower: world_e_ae_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_ae_lower_macro>, <&world_e_ae_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_ae_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_e_ae_upper_macro, /* Æ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_ae_upper
        COMPOSE_SEQ_LINUX(&kp LS(A) &kp LS(E))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_ae_upper
        COMPOSE_SEQ_MACOS(&kp LA(LS(SQT)))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_e_ae_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N8)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N6)
        #endif
      #endif
    )
    world_e_ae_upper: world_e_ae_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_ae_upper_macro>, <&world_e_ae_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_e_ae_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_e_ae: world_e_ae {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_ae_lower>, <&world_e_ae_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_a_acute_lower_macro, /* á */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_acute_lower
        COMPOSE_SEQ_LINUX(&kp SQT &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_acute_lower
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp A)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_acute_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N5)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N1)
        #endif
      #endif
    )
    world_a_acute_lower: world_a_acute_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_acute_lower_macro>, <&world_a_acute_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_acute_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_acute_upper_macro, /* Á */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_acute_upper
        COMPOSE_SEQ_LINUX(&kp SQT &kp LS(A))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_acute_upper
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp LS(A))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_acute_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N1)
        #endif
      #endif
    )
    world_a_acute_upper: world_a_acute_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_acute_upper_macro>, <&world_a_acute_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_acute_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_a_acute: world_a_acute {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_acute_lower>, <&world_a_acute_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_a_diaeresis_lower_macro, /* ä */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_diaeresis_lower
        COMPOSE_SEQ_LINUX(&kp DQT &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_diaeresis_lower
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp A)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_diaeresis_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N8)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N4)
        #endif
      #endif
    )
    world_a_diaeresis_lower: world_a_diaeresis_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_diaeresis_lower_macro>, <&world_a_diaeresis_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_diaeresis_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_diaeresis_upper_macro, /* Ä */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_diaeresis_upper
        COMPOSE_SEQ_LINUX(&kp DQT &kp LS(A))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_diaeresis_upper
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp LS(A))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_diaeresis_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N4)
        #endif
      #endif
    )
    world_a_diaeresis_upper: world_a_diaeresis_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_diaeresis_upper_macro>, <&world_a_diaeresis_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_diaeresis_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_a_diaeresis: world_a_diaeresis {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_diaeresis_lower>, <&world_a_diaeresis_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_a_circumflex_lower_macro, /* â */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_circumflex_lower
        COMPOSE_SEQ_LINUX(&kp CARET &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_circumflex_lower
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp A)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_circumflex_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N2)
        #endif
      #endif
    )
    world_a_circumflex_lower: world_a_circumflex_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_circumflex_lower_macro>, <&world_a_circumflex_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_circumflex_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_circumflex_upper_macro, /* Â */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_circumflex_upper
        COMPOSE_SEQ_LINUX(&kp CARET &kp LS(A))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_circumflex_upper
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp LS(A))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_circumflex_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N4)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N2)
        #endif
      #endif
    )
    world_a_circumflex_upper: world_a_circumflex_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_circumflex_upper_macro>, <&world_a_circumflex_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_circumflex_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_a_circumflex: world_a_circumflex {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_circumflex_lower>, <&world_a_circumflex_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_a_grave_lower_macro, /* à */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_grave_lower
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N0)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_grave_lower
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp A)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N0)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_grave_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N4)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N0)
        #endif
      #endif
    )
    world_a_grave_lower: world_a_grave_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_grave_lower_macro>, <&world_a_grave_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_grave_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_grave_upper_macro, /* À */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_grave_upper
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp LS(A))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N0)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_grave_upper
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp LS(A))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N0)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_grave_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N0)
        #endif
      #endif
    )
    world_a_grave_upper: world_a_grave_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_grave_upper_macro>, <&world_a_grave_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_grave_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_a_grave: world_a_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_grave_lower>, <&world_a_grave_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_a_tilde_lower_macro, /* ã */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_tilde_lower
        COMPOSE_SEQ_LINUX(&kp TILDE &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_tilde_lower
        COMPOSE_SEQ_MACOS(&kp LA(N) &kp A)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_tilde_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N7)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N3)
        #endif
      #endif
    )
    world_a_tilde_lower: world_a_tilde_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_tilde_lower_macro>, <&world_a_tilde_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_tilde_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_tilde_upper_macro, /* Ã */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_tilde_upper
        COMPOSE_SEQ_LINUX(&kp TILDE &kp LS(A))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_tilde_upper
        COMPOSE_SEQ_MACOS(&kp LA(N) &kp LS(A))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_tilde_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N5)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N3)
        #endif
      #endif
    )
    world_a_tilde_upper: world_a_tilde_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_tilde_upper_macro>, <&world_a_tilde_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_tilde_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_a_tilde: world_a_tilde {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_tilde_lower>, <&world_a_tilde_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_a_ring_lower_macro, /* å */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ring_lower
        COMPOSE_SEQ_LINUX(&kp O &kp A)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ring_lower
        COMPOSE_SEQ_MACOS(&kp LA(A))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ring_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N5)
        #endif
      #endif
    )
    world_a_ring_lower: world_a_ring_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_ring_lower_macro>, <&world_a_ring_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_ring_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_a_ring_upper_macro, /* Å */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ring_upper
        COMPOSE_SEQ_LINUX(&kp O &kp LS(A))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ring_upper
        COMPOSE_SEQ_MACOS(&kp LA(LS(A)))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_a_ring_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N7)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N5)
        #endif
      #endif
    )
    world_a_ring_upper: world_a_ring_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_ring_upper_macro>, <&world_a_ring_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_a_ring_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_a_ring: world_a_ring {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_ring_lower>, <&world_a_ring_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_y_acute_lower_macro, /* ý */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_acute_lower
        COMPOSE_SEQ_LINUX(&kp SQT &kp Y)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_acute_lower
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp Y)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_acute_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N5 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp D)
        #endif
      #endif
    )
    world_y_acute_lower: world_y_acute_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_acute_lower_macro>, <&world_y_acute_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_y_acute_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_y_acute_upper_macro, /* Ý */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_acute_upper
        COMPOSE_SEQ_LINUX(&kp SQT &kp LS(Y))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_acute_upper
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp LS(Y))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp D)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_acute_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp D)
        #endif
      #endif
    )
    world_y_acute_upper: world_y_acute_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_acute_upper_macro>, <&world_y_acute_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_y_acute_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_y_acute: world_y_acute {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_acute_lower>, <&world_y_acute_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_y_diaeresis_lower_macro, /* ÿ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_diaeresis_lower
        COMPOSE_SEQ_LINUX(&kp DQT &kp Y)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_diaeresis_lower
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp Y)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_diaeresis_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N5 &kp KP_N5)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp F)
        #endif
      #endif
    )
    world_y_diaeresis_lower: world_y_diaeresis_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_diaeresis_lower_macro>, <&world_y_diaeresis_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_y_diaeresis_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_y_diaeresis_upper_macro, /* Ÿ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_diaeresis_upper
        COMPOSE_SEQ_LINUX(&kp DQT &kp LS(Y))
        #else
        UNICODE_SEQ_LINUX(&kp N1 &kp N7 &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_diaeresis_upper
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp LS(Y))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N1 &kp N7 &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_y_diaeresis_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N5 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp N7 &kp N8)
        #endif
      #endif
    )
    world_y_diaeresis_upper: world_y_diaeresis_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_diaeresis_upper_macro>, <&world_y_diaeresis_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_y_diaeresis_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_y_diaeresis: world_y_diaeresis {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_diaeresis_lower>, <&world_y_diaeresis_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_o_acute_lower_macro, /* ó */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_acute_lower
        COMPOSE_SEQ_LINUX(&kp SQT &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_acute_lower
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp O)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_acute_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N3)
        #endif
      #endif
    )
    world_o_acute_lower: world_o_acute_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_acute_lower_macro>, <&world_o_acute_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_acute_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_acute_upper_macro, /* Ó */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_acute_upper
        COMPOSE_SEQ_LINUX(&kp SQT &kp LS(O))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_acute_upper
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp LS(O))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N3)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_acute_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N3)
        #endif
      #endif
    )
    world_o_acute_upper: world_o_acute_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_acute_upper_macro>, <&world_o_acute_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_acute_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_o_acute: world_o_acute {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_acute_lower>, <&world_o_acute_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_o_diaeresis_lower_macro, /* ö */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_diaeresis_lower
        COMPOSE_SEQ_LINUX(&kp DQT &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_diaeresis_lower
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp O)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_diaeresis_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N6)
        #endif
      #endif
    )
    world_o_diaeresis_lower: world_o_diaeresis_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_diaeresis_lower_macro>, <&world_o_diaeresis_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_diaeresis_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_diaeresis_upper_macro, /* Ö */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_diaeresis_upper
        COMPOSE_SEQ_LINUX(&kp DQT &kp LS(O))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_diaeresis_upper
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp LS(O))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N6)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_diaeresis_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N4)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N6)
        #endif
      #endif
    )
    world_o_diaeresis_upper: world_o_diaeresis_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_diaeresis_upper_macro>, <&world_o_diaeresis_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_diaeresis_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_o_diaeresis: world_o_diaeresis {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_diaeresis_lower>, <&world_o_diaeresis_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_o_circumflex_lower_macro, /* ô */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_circumflex_lower
        COMPOSE_SEQ_LINUX(&kp CARET &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_circumflex_lower
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp O)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_circumflex_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N4)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N4)
        #endif
      #endif
    )
    world_o_circumflex_lower: world_o_circumflex_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_circumflex_lower_macro>, <&world_o_circumflex_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_circumflex_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_circumflex_upper_macro, /* Ô */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_circumflex_upper
        COMPOSE_SEQ_LINUX(&kp CARET &kp LS(O))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_circumflex_upper
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp LS(O))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N4)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_circumflex_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N4)
        #endif
      #endif
    )
    world_o_circumflex_upper: world_o_circumflex_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_circumflex_upper_macro>, <&world_o_circumflex_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_circumflex_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_o_circumflex: world_o_circumflex {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_circumflex_lower>, <&world_o_circumflex_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_o_grave_lower_macro, /* ò */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_grave_lower
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_grave_lower
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp O)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_grave_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N2)
        #endif
      #endif
    )
    world_o_grave_lower: world_o_grave_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_grave_lower_macro>, <&world_o_grave_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_grave_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_grave_upper_macro, /* Ò */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_grave_upper
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp LS(O))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_grave_upper
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp LS(O))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N2)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_grave_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N0)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N2)
        #endif
      #endif
    )
    world_o_grave_upper: world_o_grave_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_grave_upper_macro>, <&world_o_grave_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_grave_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_o_grave: world_o_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_grave_lower>, <&world_o_grave_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_o_tilde_lower_macro, /* õ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_tilde_lower
        COMPOSE_SEQ_LINUX(&kp TILDE &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_tilde_lower
        COMPOSE_SEQ_MACOS(&kp LA(N) &kp O)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_tilde_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N5)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N5)
        #endif
      #endif
    )
    world_o_tilde_lower: world_o_tilde_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_tilde_lower_macro>, <&world_o_tilde_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_tilde_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_tilde_upper_macro, /* Õ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_tilde_upper
        COMPOSE_SEQ_LINUX(&kp TILDE &kp LS(O))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_tilde_upper
        COMPOSE_SEQ_MACOS(&kp LA(N) &kp LS(O))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N5)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_tilde_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N5)
        #endif
      #endif
    )
    world_o_tilde_upper: world_o_tilde_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_tilde_upper_macro>, <&world_o_tilde_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_tilde_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_o_tilde: world_o_tilde {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_tilde_lower>, <&world_o_tilde_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_o_slash_lower_macro, /* ø */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_slash_lower
        COMPOSE_SEQ_LINUX(&kp FSLH &kp O)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_slash_lower
        COMPOSE_SEQ_MACOS(&kp LA(O))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_slash_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N8)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N8)
        #endif
      #endif
    )
    world_o_slash_lower: world_o_slash_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_slash_lower_macro>, <&world_o_slash_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_slash_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_o_slash_upper_macro, /* Ø */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_slash_upper
        COMPOSE_SEQ_LINUX(&kp FSLH &kp LS(O))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_slash_upper
        COMPOSE_SEQ_MACOS(&kp LA(LS(O)))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N8)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_o_slash_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N6)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N8)
        #endif
      #endif
    )
    world_o_slash_upper: world_o_slash_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_slash_upper_macro>, <&world_o_slash_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_o_slash_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_o_slash: world_o_slash {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_slash_lower>, <&world_o_slash_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_u_acute_lower_macro, /* ú */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_acute_lower
        COMPOSE_SEQ_LINUX(&kp SQT &kp U)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_acute_lower
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp U)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_acute_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N5 &kp KP_N0)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp A)
        #endif
      #endif
    )
    world_u_acute_lower: world_u_acute_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_acute_lower_macro>, <&world_u_acute_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_acute_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_u_acute_upper_macro, /* Ú */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_acute_upper
        COMPOSE_SEQ_LINUX(&kp SQT &kp LS(U))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_acute_upper
        COMPOSE_SEQ_MACOS(&kp LA(E) &kp LS(U))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp A)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_acute_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N8)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp A)
        #endif
      #endif
    )
    world_u_acute_upper: world_u_acute_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_acute_upper_macro>, <&world_u_acute_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_acute_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_u_acute: world_u_acute {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_acute_lower>, <&world_u_acute_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_u_diaeresis_lower_macro, /* ü */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_diaeresis_lower
        COMPOSE_SEQ_LINUX(&kp DQT &kp U)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_diaeresis_lower
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp U)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_diaeresis_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N5 &kp KP_N2)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp C)
        #endif
      #endif
    )
    world_u_diaeresis_lower: world_u_diaeresis_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_diaeresis_lower_macro>, <&world_u_diaeresis_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_diaeresis_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_u_diaeresis_upper_macro, /* Ü */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_diaeresis_upper
        COMPOSE_SEQ_LINUX(&kp DQT &kp LS(U))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_diaeresis_upper
        COMPOSE_SEQ_MACOS(&kp LA(U) &kp LS(U))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_diaeresis_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N0)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp C)
        #endif
      #endif
    )
    world_u_diaeresis_upper: world_u_diaeresis_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_diaeresis_upper_macro>, <&world_u_diaeresis_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_diaeresis_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_u_diaeresis: world_u_diaeresis {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_diaeresis_lower>, <&world_u_diaeresis_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_u_circumflex_lower_macro, /* û */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_circumflex_lower
        COMPOSE_SEQ_LINUX(&kp CARET &kp U)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_circumflex_lower
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp U)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_circumflex_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N5 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp B)
        #endif
      #endif
    )
    world_u_circumflex_lower: world_u_circumflex_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_circumflex_lower_macro>, <&world_u_circumflex_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_circumflex_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_u_circumflex_upper_macro, /* Û */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_circumflex_upper
        COMPOSE_SEQ_LINUX(&kp CARET &kp LS(U))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_circumflex_upper
        COMPOSE_SEQ_MACOS(&kp LA(I) &kp LS(U))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp B)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_circumflex_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp B)
        #endif
      #endif
    )
    world_u_circumflex_upper: world_u_circumflex_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_circumflex_upper_macro>, <&world_u_circumflex_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_circumflex_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_u_circumflex: world_u_circumflex {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_circumflex_lower>, <&world_u_circumflex_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_u_grave_lower_macro, /* ù */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_grave_lower
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp U)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_grave_lower
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp U)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_grave_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N9)
        #endif
      #endif
    )
    world_u_grave_lower: world_u_grave_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_grave_lower_macro>, <&world_u_grave_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_grave_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_u_grave_upper_macro, /* Ù */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_grave_upper
        COMPOSE_SEQ_LINUX(&kp GRAVE &kp LS(U))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_grave_upper
        COMPOSE_SEQ_MACOS(&kp LA(GRAVE) &kp LS(U))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N9)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_u_grave_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N1 &kp KP_N7)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N9)
        #endif
      #endif
    )
    world_u_grave_upper: world_u_grave_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_grave_upper_macro>, <&world_u_grave_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_u_grave_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_u_grave: world_u_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_grave_lower>, <&world_u_grave_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_consonants_cedilla_lower_macro, /* ç */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_lower
        COMPOSE_SEQ_LINUX(&kp COMMA &kp C)
        #else
        UNICODE_SEQ_LINUX(&kp E &kp N7)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_lower
        COMPOSE_SEQ_MACOS(&kp LA(C))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp E &kp N7)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N3 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp E &kp N7)
        #endif
      #endif
    )
    world_consonants_cedilla_lower: world_consonants_cedilla_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_cedilla_lower_macro>, <&world_consonants_cedilla_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_consonants_cedilla_upper_macro, /* Ç */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_upper
        COMPOSE_SEQ_LINUX(&kp COMMA &kp LS(C))
        #else
        UNICODE_SEQ_LINUX(&kp C &kp N7)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_upper
        COMPOSE_SEQ_MACOS(&kp LA(LS(C)))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp C &kp N7)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N9 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp C &kp N7)
        #endif
      #endif
    )
    world_consonants_cedilla_upper: world_consonants_cedilla_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_cedilla_upper_macro>, <&world_consonants_cedilla_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_consonants_cedilla_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_consonants_cedilla: world_consonants_cedilla {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_cedilla_lower>, <&world_consonants_cedilla_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_consonants_eszett_lower_macro, /* ß */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_eszett_lower
        COMPOSE_SEQ_LINUX(&kp S &kp S)
        #else
        UNICODE_SEQ_LINUX(&kp D &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_eszett_lower
        COMPOSE_SEQ_MACOS(&kp LA(S))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp F)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_eszett_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N2 &kp KP_N3)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp F)
        #endif
      #endif
    )
    world_consonants_eszett_lower: world_consonants_eszett_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_eszett_lower_macro>, <&world_consonants_eszett_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_consonants_eszett_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_consonants_eszett_upper_macro, /* ẞ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_eszett_upper
        COMPOSE_SEQ_LINUX(&kp LS(S) &kp LS(S))
        #else
        UNICODE_SEQ_LINUX(&kp N1 &kp E &kp N9 &kp E)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_eszett_upper
        COMPOSE_SEQ_MACOS(&kp LA(LS(S)))
        #else
        UNICODE_SEQ_MACOS(&kp N1 &kp E &kp N9 &kp E)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp E &kp N9 &kp E)
      #endif
    )
    world_consonants_eszett_upper: world_consonants_eszett_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_eszett_upper_macro>, <&world_consonants_eszett_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_consonants_eszett_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_consonants_eszett: world_consonants_eszett {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_eszett_lower>, <&world_consonants_eszett_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_consonants_ntilde_lower_macro, /* ñ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_lower
        COMPOSE_SEQ_LINUX(&kp TILDE &kp N)
        #else
        UNICODE_SEQ_LINUX(&kp F &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_lower
        COMPOSE_SEQ_MACOS(&kp LA(N) &kp N)
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp F &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_lower
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N4 &kp KP_N1)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp N1)
        #endif
      #endif
    )
    world_consonants_ntilde_lower: world_consonants_ntilde_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_ntilde_lower_macro>, <&world_consonants_ntilde_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_consonants_ntilde_upper_macro, /* Ñ */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_upper
        COMPOSE_SEQ_LINUX(&kp TILDE &kp LS(N))
        #else
        UNICODE_SEQ_LINUX(&kp D &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_upper
        COMPOSE_SEQ_MACOS(&kp LA(N) &kp LS(N))
        #else
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp D &kp N1)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_upper
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N2 &kp KP_N0 &kp KP_N9)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp D &kp N1)
        #endif
      #endif
    )
    world_consonants_ntilde_upper: world_consonants_ntilde_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_ntilde_upper_macro>, <&world_consonants_ntilde_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_consonants_ntilde_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_consonants_ntilde: world_consonants_ntilde {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_ntilde_lower>, <&world_consonants_ntilde_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_left_angle_lower_macro, /* ‹ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N3 &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N3 &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N3 &kp N9)
      #endif
    )
    world_quotes_left_angle_lower: world_quotes_left_angle_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_angle_lower_macro>, <&world_quotes_left_angle_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_angle_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_left_angle_upper_macro, /* « */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp A &kp B)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp B)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp B)
      #endif
    )
    world_quotes_left_angle_upper: world_quotes_left_angle_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_angle_upper_macro>, <&world_quotes_left_angle_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_angle_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_left_angle: world_quotes_left_angle {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_angle_lower>, <&world_quotes_left_angle_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_left_curly_lower_macro, /* ‘ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N1 &kp N8)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N1 &kp N8)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N1 &kp N8)
      #endif
    )
    world_quotes_left_curly_lower: world_quotes_left_curly_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_curly_lower_macro>, <&world_quotes_left_curly_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_curly_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_left_curly_upper_macro, /* “ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N1 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N1 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N1 &kp C)
      #endif
    )
    world_quotes_left_curly_upper: world_quotes_left_curly_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_curly_upper_macro>, <&world_quotes_left_curly_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_curly_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_left_curly: world_quotes_left_curly {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_curly_lower>, <&world_quotes_left_curly_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_left_low_lower_macro, /* ‚ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N1 &kp A)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N1 &kp A)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N1 &kp A)
      #endif
    )
    world_quotes_left_low_lower: world_quotes_left_low_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_low_lower_macro>, <&world_quotes_left_low_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_low_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_left_low_upper_macro, /* „ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N1 &kp E)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N1 &kp E)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N1 &kp E)
      #endif
    )
    world_quotes_left_low_upper: world_quotes_left_low_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_low_upper_macro>, <&world_quotes_left_low_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_low_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_left_low: world_quotes_left_low {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_low_lower>, <&world_quotes_left_low_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_left_corner1_lower_macro, /* 「 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N3 &kp N0 &kp N0 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N3 &kp N0 &kp N0 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N3 &kp N0 &kp N0 &kp C)
      #endif
    )
    world_quotes_left_corner1_lower: world_quotes_left_corner1_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner1_lower_macro>, <&world_quotes_left_corner1_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_corner1_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_left_corner1_upper_macro, /* ﹁ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N4 &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N4 &kp N1)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N4 &kp N1)
      #endif
    )
    world_quotes_left_corner1_upper: world_quotes_left_corner1_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner1_upper_macro>, <&world_quotes_left_corner1_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_corner1_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_left_corner1: world_quotes_left_corner1 {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner1_lower>, <&world_quotes_left_corner1_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_left_corner2_lower_macro, /* 『 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N3 &kp N0 &kp N0 &kp E)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N3 &kp N0 &kp N0 &kp E)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N3 &kp N0 &kp N0 &kp E)
      #endif
    )
    world_quotes_left_corner2_lower: world_quotes_left_corner2_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner2_lower_macro>, <&world_quotes_left_corner2_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_corner2_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_left_corner2_upper_macro, /* ﹃ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N4 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N4 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N4 &kp N3)
      #endif
    )
    world_quotes_left_corner2_upper: world_quotes_left_corner2_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner2_upper_macro>, <&world_quotes_left_corner2_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_corner2_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_left_corner2: world_quotes_left_corner2 {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner2_lower>, <&world_quotes_left_corner2_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_left_grave_macro, /* ` */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N6 &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp N6 &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N6 &kp N0)
      #endif
    )
    world_quotes_left_grave: world_quotes_left_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_grave_macro>, <&world_quotes_left_grave_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_left_grave
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_right_angle_lower_macro, /* › */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N3 &kp A)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N3 &kp A)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N3 &kp A)
      #endif
    )
    world_quotes_right_angle_lower: world_quotes_right_angle_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_angle_lower_macro>, <&world_quotes_right_angle_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_angle_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_right_angle_upper_macro, /* » */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp B &kp B)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp B)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp B)
      #endif
    )
    world_quotes_right_angle_upper: world_quotes_right_angle_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_angle_upper_macro>, <&world_quotes_right_angle_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_angle_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_right_angle: world_quotes_right_angle {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_angle_lower>, <&world_quotes_right_angle_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_right_curly_lower_macro, /* ’ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N1 &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N1 &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N1 &kp N9)
      #endif
    )
    world_quotes_right_curly_lower: world_quotes_right_curly_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_curly_lower_macro>, <&world_quotes_right_curly_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_curly_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_right_curly_upper_macro, /* ” */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N1 &kp D)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N1 &kp D)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N1 &kp D)
      #endif
    )
    world_quotes_right_curly_upper: world_quotes_right_curly_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_curly_upper_macro>, <&world_quotes_right_curly_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_curly_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_right_curly: world_quotes_right_curly {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_curly_lower>, <&world_quotes_right_curly_upper>;
        mods = <MOD_LSFT>;
    };
    world_quotes_right_low: world_quotes_right_low {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_low_lower>, <&world_quotes_left_low_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_right_corner1_lower_macro, /* 」 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N3 &kp N0 &kp N0 &kp D)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N3 &kp N0 &kp N0 &kp D)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N3 &kp N0 &kp N0 &kp D)
      #endif
    )
    world_quotes_right_corner1_lower: world_quotes_right_corner1_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner1_lower_macro>, <&world_quotes_right_corner1_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_corner1_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_right_corner1_upper_macro, /* ﹂ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N4 &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N4 &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N4 &kp N2)
      #endif
    )
    world_quotes_right_corner1_upper: world_quotes_right_corner1_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner1_upper_macro>, <&world_quotes_right_corner1_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_corner1_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_right_corner1: world_quotes_right_corner1 {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner1_lower>, <&world_quotes_right_corner1_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_right_corner2_lower_macro, /* 』 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N3 &kp N0 &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N3 &kp N0 &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N3 &kp N0 &kp N0 &kp F)
      #endif
    )
    world_quotes_right_corner2_lower: world_quotes_right_corner2_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner2_lower_macro>, <&world_quotes_right_corner2_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_corner2_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_quotes_right_corner2_upper_macro, /* ﹄ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N4 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N4 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N4 &kp N4)
      #endif
    )
    world_quotes_right_corner2_upper: world_quotes_right_corner2_upper {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner2_upper_macro>, <&world_quotes_right_corner2_upper_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_corner2_upper
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_quotes_right_corner2: world_quotes_right_corner2 {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner2_lower>, <&world_quotes_right_corner2_upper>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_quotes_right_grave_macro, /* ´ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp B &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp B &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp B &kp N4)
      #endif
    )
    world_quotes_right_grave: world_quotes_right_grave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_grave_macro>, <&world_quotes_right_grave_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_quotes_right_grave
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_dollar_lower_macro, /* $ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp N2 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N4)
      #endif
    )
    world_currency_dollar_lower: world_currency_dollar_lower {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_dollar_lower_macro>, <&world_currency_dollar_lower_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_dollar_lower
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_currency_dollar: world_currency_dollar {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_dollar_lower>, <&world_currency_cent>;
        mods = <MOD_LSFT>;
    };
    UNICODE(world_currency_yen_macro, /* ¥ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp A &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp N5)
      #endif
    )
    world_currency_yen: world_currency_yen {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_yen_macro>, <&world_currency_yen_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_yen
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_euro_macro, /* € */
      #if UNICODE_TARGET_OS == 'L'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_currency_euro
        COMPOSE_SEQ_LINUX(&kp E &kp EQUAL)
        #else
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp A &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'M'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_currency_euro
        COMPOSE_SEQ_MACOS(&kp LA(LS(N2)))
        #else
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp A &kp C)
        #endif
      #elif UNICODE_TARGET_OS == 'W'
        #ifdef WORLD_USE_COMPOSE
        #define WORLD_USE_COMPOSE_FOR_world_currency_euro
        COMPOSE_SEQ_WINDOWS(&kp KP_N0 &kp KP_N1 &kp KP_N2 &kp KP_N8)
        #else
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp A &kp C)
        #endif
      #endif
    )
    world_currency_euro: world_currency_euro {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_euro_macro>, <&world_currency_euro_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_euro
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_won_macro, /* ₩ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp A &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp A &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp A &kp N9)
      #endif
    )
    world_currency_won: world_currency_won {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_won_macro>, <&world_currency_won_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_won
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(world_currency_pound_macro, /* £ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp A &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N0 &kp N0 &kp A &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp A &kp N3)
      #endif
    )
    world_currency_pound: world_currency_pound {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_pound_macro>, <&world_currency_pound_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_world_currency_pound
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    world_currency_generic: world_currency_generic {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_sign>, <&world_currency_crypto>;
        mods = <MOD_LSFT>;
    };

    //
    // transforms
    //
    world_i_base: world_i_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_acute>, <&world_i_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_i_LCTL: world_i_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_diaeresis>, <&world_i_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_i_RCTL: world_i_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_i_circumflex>, <&world_i_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_e_base: world_e_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_acute>, <&world_e_RALT>;
        mods = <(MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_e_RALT: world_e_RALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_ae>, <&world_e_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_e_LCTL: world_e_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_diaeresis>, <&world_e_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_e_RCTL: world_e_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_e_circumflex>, <&world_e_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_a_base: world_a_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_acute>, <&world_a_LALT>;
        mods = <(MOD_LALT|MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_a_LALT: world_a_LALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_tilde>, <&world_a_RALT>;
        mods = <(MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_a_RALT: world_a_RALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_ring>, <&world_a_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_a_LCTL: world_a_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_diaeresis>, <&world_a_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_a_RCTL: world_a_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_a_circumflex>, <&world_a_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_y_base: world_y_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_y_acute>, <&world_y_diaeresis>;
        mods = <(MOD_LCTL)>;
    };
    world_o_base: world_o_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_acute>, <&world_o_LALT>;
        mods = <(MOD_LALT|MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_o_LALT: world_o_LALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_tilde>, <&world_o_RALT>;
        mods = <(MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_o_RALT: world_o_RALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_slash>, <&world_o_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_o_LCTL: world_o_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_diaeresis>, <&world_o_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_o_RCTL: world_o_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_o_circumflex>, <&world_o_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_u_base: world_u_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_acute>, <&world_u_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_u_LCTL: world_u_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_diaeresis>, <&world_u_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_u_RCTL: world_u_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_u_circumflex>, <&world_u_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_consonants_base: world_consonants_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_cedilla>, <&world_consonants_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL)>;
    };
    world_consonants_LCTL: world_consonants_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_consonants_ntilde>, <&world_consonants_eszett>;
        mods = <(MOD_RCTL)>;
    };
    world_quotes_left_base: world_quotes_left_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_angle>, <&world_quotes_left_LALT>;
        mods = <(MOD_LALT|MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_left_LALT: world_quotes_left_LALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner1>, <&world_quotes_left_RALT>;
        mods = <(MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_left_RALT: world_quotes_left_RALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_corner2>, <&world_quotes_left_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_left_LCTL: world_quotes_left_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_curly>, <&world_quotes_left_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_left_RCTL: world_quotes_left_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_left_low>, <&world_quotes_left_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_quotes_right_base: world_quotes_right_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_angle>, <&world_quotes_right_LALT>;
        mods = <(MOD_LALT|MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_right_LALT: world_quotes_right_LALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner1>, <&world_quotes_right_RALT>;
        mods = <(MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_right_RALT: world_quotes_right_RALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_corner2>, <&world_quotes_right_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_right_LCTL: world_quotes_right_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_curly>, <&world_quotes_right_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_quotes_right_RCTL: world_quotes_right_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_quotes_right_low>, <&world_quotes_right_grave>;
        mods = <(MOD_RSFT)>;
    };
    world_currency_base: world_currency_base {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_dollar>, <&world_currency_LALT>;
        mods = <(MOD_LALT|MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_currency_LALT: world_currency_LALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_yen>, <&world_currency_RALT>;
        mods = <(MOD_RALT|MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_currency_RALT: world_currency_RALT {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_won>, <&world_currency_LCTL>;
        mods = <(MOD_LCTL|MOD_RCTL|MOD_RSFT)>;
    };
    world_currency_LCTL: world_currency_LCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_euro>, <&world_currency_RCTL>;
        mods = <(MOD_RCTL|MOD_RSFT)>;
    };
    world_currency_RCTL: world_currency_RCTL {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&world_currency_pound>, <&world_currency_generic>;
        mods = <(MOD_RSFT)>;
    };

    //////////////////////////////////////////////////////////////////////////
    //
    // Emoji layer - modern age pictograms
    //
    //////////////////////////////////////////////////////////////////////////

    //
    // EMOJI_GENDER_SIGN_PRESET defines an Emoji gender sign for use as a
    // convenient inward-rolling shortcut on the home row of the layer.
    //
    #ifndef EMOJI_GENDER_SIGN_PRESET
    #define EMOJI_GENDER_SIGN_PRESET 'N' // neutral
    //#define EMOJI_GENDER_SIGN_PRESET 'M' // male
    //#define EMOJI_GENDER_SIGN_PRESET 'F' // female
    #endif

    //
    // EMOJI_SKIN_TONE_PRESET defines an Emoji skin tone for use as a
    // convenient inward-rolling shortcut on the home row of the layer.
    //
    #ifndef EMOJI_SKIN_TONE_PRESET
    #define EMOJI_SKIN_TONE_PRESET 'N' // neutral
    //#define EMOJI_SKIN_TONE_PRESET 'L' // light_skin_tone
    //#define EMOJI_SKIN_TONE_PRESET 'l' // medium_light_skin_tone
    //#define EMOJI_SKIN_TONE_PRESET 'M' // medium_skin_tone
    //#define EMOJI_SKIN_TONE_PRESET 'd' // medium_dark_skin_tone
    //#define EMOJI_SKIN_TONE_PRESET 'D' // dark_skin_tone
    #endif

    //
    // EMOJI_HAIR_STYLE_PRESET defines an Emoji hair style for use as a
    // convenient inward-rolling shortcut on the home row of the layer.
    //
    #ifndef EMOJI_HAIR_STYLE_PRESET
    #define EMOJI_HAIR_STYLE_PRESET 'N' // neutral
    //#define EMOJI_HAIR_STYLE_PRESET 'B' // bald
    //#define EMOJI_HAIR_STYLE_PRESET 'R' // red_hair
    //#define EMOJI_HAIR_STYLE_PRESET 'C' // curly_hair
    //#define EMOJI_HAIR_STYLE_PRESET 'W' // white_hair
    #endif

    //
    // NOTE: edit the emoji.yaml file and run `rake` to generate this:
    //

    //
    // codepoints
    //
    UNICODE(emoji_zwj_macro, /* ‍ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N0 &kp D)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N0 &kp D)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N0 &kp D)
      #endif
    )
    emoji_zwj: emoji_zwj {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_zwj_macro>, <&emoji_zwj_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_zwj
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_male_sign_macro, /* ♂️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp N4 &kp N2), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp N4 &kp N2), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp N4 &kp N2), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_male_sign: emoji_male_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_male_sign_macro>, <&emoji_male_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_male_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_female_sign_macro, /* ♀️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp N4 &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp N4 &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp N4 &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_female_sign: emoji_female_sign {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_female_sign_macro>, <&emoji_female_sign_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_female_sign
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_right_arrow_macro, /* ➡️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N7 &kp A &kp N1), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N7 &kp A &kp N1), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N7 &kp A &kp N1), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_right_arrow: emoji_right_arrow {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_right_arrow_macro>, <&emoji_right_arrow_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_right_arrow
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_left_arrow_macro, /* ⬅️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp B &kp N0 &kp N5), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp B &kp N0 &kp N5), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp B &kp N0 &kp N5), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_left_arrow: emoji_left_arrow {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_left_arrow_macro>, <&emoji_left_arrow_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_left_arrow
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_rainbow_macro, /* 🌈 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N0 &kp N8)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N0 &kp N8)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N0 &kp N8)
      #endif
    )
    emoji_rainbow: emoji_rainbow {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_rainbow_macro>, <&emoji_rainbow_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_rainbow
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_cloudy_macro, /* ️☁️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp N0 &kp N1), UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp N0 &kp N1), UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp N0 &kp N1), UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_cloudy: emoji_cloudy {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_cloudy_macro>, <&emoji_cloudy_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_cloudy
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_mostly_cloudy_macro, /* 🌥 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N2 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N2 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N2 &kp N5)
      #endif
    )
    emoji_mostly_cloudy: emoji_mostly_cloudy {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_mostly_cloudy_macro>, <&emoji_mostly_cloudy_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_mostly_cloudy
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_partly_cloudy_macro, /* ⛅ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp C &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp C &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp C &kp N5)
      #endif
    )
    emoji_partly_cloudy: emoji_partly_cloudy {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_partly_cloudy_macro>, <&emoji_partly_cloudy_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_partly_cloudy
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_mostly_sunny_macro, /* ️🌤️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N2 &kp N4), UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N2 &kp N4), UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N2 &kp N4), UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_mostly_sunny: emoji_mostly_sunny {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_mostly_sunny_macro>, <&emoji_mostly_sunny_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_mostly_sunny
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_sunny_macro, /* ☀️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp N0 &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp N0 &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp N0 &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_sunny: emoji_sunny {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sunny_macro>, <&emoji_sunny_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_sunny
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_sunrise_macro, /* 🌅 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N0 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N0 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N0 &kp N5)
      #endif
    )
    emoji_sunrise: emoji_sunrise {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sunrise_macro>, <&emoji_sunrise_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_sunrise
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_sunrise_mountains_macro, /* 🌄 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N0 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N0 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N0 &kp N4)
      #endif
    )
    emoji_sunrise_mountains: emoji_sunrise_mountains {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sunrise_mountains_macro>, <&emoji_sunrise_mountains_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_sunrise_mountains
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_cityscape_macro, /* ️🏙️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp D &kp N9), UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp D &kp N9), UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp D &kp N9), UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_cityscape: emoji_cityscape {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_cityscape_macro>, <&emoji_cityscape_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_cityscape
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_cityscape_dusk_macro, /* ️🌇 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N0 &kp N7)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N0 &kp N7)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N0 &kp N7)
      #endif
    )
    emoji_cityscape_dusk: emoji_cityscape_dusk {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_cityscape_dusk_macro>, <&emoji_cityscape_dusk_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_cityscape_dusk
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_cityscape_night_macro, /* 🌃 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N0 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N0 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N0 &kp N3)
      #endif
    )
    emoji_cityscape_night: emoji_cityscape_night {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_cityscape_night_macro>, <&emoji_cityscape_night_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_cityscape_night
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_light_skin_tone_macro, /* 🏻 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp F &kp B)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp F &kp B)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp F &kp B)
      #endif
    )
    emoji_light_skin_tone: emoji_light_skin_tone {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_light_skin_tone_macro>, <&emoji_light_skin_tone_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_light_skin_tone
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_medium_light_skin_tone_macro, /* 🏼 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp F &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp F &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp F &kp C)
      #endif
    )
    emoji_medium_light_skin_tone: emoji_medium_light_skin_tone {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_medium_light_skin_tone_macro>, <&emoji_medium_light_skin_tone_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_medium_light_skin_tone
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_medium_skin_tone_macro, /* 🏽 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp F &kp D)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp F &kp D)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp F &kp D)
      #endif
    )
    emoji_medium_skin_tone: emoji_medium_skin_tone {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_medium_skin_tone_macro>, <&emoji_medium_skin_tone_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_medium_skin_tone
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_medium_dark_skin_tone_macro, /* 🏾 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp F &kp E)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp F &kp E)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp F &kp E)
      #endif
    )
    emoji_medium_dark_skin_tone: emoji_medium_dark_skin_tone {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_medium_dark_skin_tone_macro>, <&emoji_medium_dark_skin_tone_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_medium_dark_skin_tone
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_dark_skin_tone_macro, /* 🏿 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp F &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp F &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp F &kp F)
      #endif
    )
    emoji_dark_skin_tone: emoji_dark_skin_tone {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_dark_skin_tone_macro>, <&emoji_dark_skin_tone_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_dark_skin_tone
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_baby_bottle_macro, /* 🍼 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N7 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N7 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N7 &kp C)
      #endif
    )
    emoji_baby_bottle: emoji_baby_bottle {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_baby_bottle_macro>, <&emoji_baby_bottle_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_baby_bottle
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_baby_macro, /* 👶 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N7 &kp N6)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N7 &kp N6)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N7 &kp N6)
      #endif
    )
    emoji_baby: emoji_baby {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_baby_macro>, <&emoji_baby_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_baby
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_boy_macro, /* 👦 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N6 &kp N6)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N6 &kp N6)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N6 &kp N6)
      #endif
    )
    emoji_boy: emoji_boy {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_boy_macro>, <&emoji_boy_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_boy
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_girl_macro, /* 👧 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N6 &kp N7)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N6 &kp N7)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N6 &kp N7)
      #endif
    )
    emoji_girl: emoji_girl {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_girl_macro>, <&emoji_girl_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_girl
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_man_macro, /* 👨 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N6 &kp N8)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N6 &kp N8)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N6 &kp N8)
      #endif
    )
    emoji_man: emoji_man {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_man_macro>, <&emoji_man_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_man
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_woman_macro, /* 👩 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N6 &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N6 &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N6 &kp N9)
      #endif
    )
    emoji_woman: emoji_woman {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_woman_macro>, <&emoji_woman_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_woman
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_old_man_macro, /* 👴 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N7 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N7 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N7 &kp N4)
      #endif
    )
    emoji_old_man: emoji_old_man {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_old_man_macro>, <&emoji_old_man_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_old_man
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_old_woman_macro, /* 👵 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N7 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N7 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N7 &kp N5)
      #endif
    )
    emoji_old_woman: emoji_old_woman {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_old_woman_macro>, <&emoji_old_woman_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_old_woman
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_white_hair_macro, /* 🦳 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp B &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp B &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp B &kp N3)
      #endif
    )
    emoji_white_hair: emoji_white_hair {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_white_hair_macro>, <&emoji_white_hair_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_white_hair
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_curly_hair_macro, /* 🦱 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp B &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp B &kp N1)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp B &kp N1)
      #endif
    )
    emoji_curly_hair: emoji_curly_hair {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_curly_hair_macro>, <&emoji_curly_hair_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_curly_hair
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_red_hair_macro, /* 🦰 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp B &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp B &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp B &kp N0)
      #endif
    )
    emoji_red_hair: emoji_red_hair {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_red_hair_macro>, <&emoji_red_hair_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_red_hair
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_bald_macro, /* 🦲 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp B &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp B &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp B &kp N2)
      #endif
    )
    emoji_bald: emoji_bald {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_bald_macro>, <&emoji_bald_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_bald
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_new_moon_macro, /* 🌑 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N1)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N1)
      #endif
    )
    emoji_new_moon: emoji_new_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_new_moon_macro>, <&emoji_new_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_new_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_waxing_crescent_moon_macro, /* 🌒 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N2)
      #endif
    )
    emoji_waxing_crescent_moon: emoji_waxing_crescent_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_waxing_crescent_moon_macro>, <&emoji_waxing_crescent_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_waxing_crescent_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_first_quarter_moon_macro, /* 🌓 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N3)
      #endif
    )
    emoji_first_quarter_moon: emoji_first_quarter_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_first_quarter_moon_macro>, <&emoji_first_quarter_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_first_quarter_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_waxing_gibbous_moon_macro, /* 🌔 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N4)
      #endif
    )
    emoji_waxing_gibbous_moon: emoji_waxing_gibbous_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_waxing_gibbous_moon_macro>, <&emoji_waxing_gibbous_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_waxing_gibbous_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_full_moon_macro, /* 🌕 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N5)
      #endif
    )
    emoji_full_moon: emoji_full_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_full_moon_macro>, <&emoji_full_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_full_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_waning_gibbous_moon_macro, /* 🌖 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N6)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N6)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N6)
      #endif
    )
    emoji_waning_gibbous_moon: emoji_waning_gibbous_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_waning_gibbous_moon_macro>, <&emoji_waning_gibbous_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_waning_gibbous_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_last_quarter_moon_macro, /* 🌗 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N7)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N7)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N7)
      #endif
    )
    emoji_last_quarter_moon: emoji_last_quarter_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_last_quarter_moon_macro>, <&emoji_last_quarter_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_last_quarter_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_waning_crescent_moon_macro, /* 🌘 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N1 &kp N8)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N1 &kp N8)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N1 &kp N8)
      #endif
    )
    emoji_waning_crescent_moon: emoji_waning_crescent_moon {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_waning_crescent_moon_macro>, <&emoji_waning_crescent_moon_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_waning_crescent_moon
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_tada_macro, /* 🎉 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N3 &kp N8 &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp C &kp D &kp F &kp N8 &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N3 &kp N8 &kp N9)
      #endif
    )
    emoji_tada: emoji_tada {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_tada_macro>, <&emoji_tada_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_tada
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_heart_macro, /* ️❤️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp N2 &kp N7 &kp N6 &kp N4), UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp N2 &kp N7 &kp N6 &kp N4), UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N7 &kp N6 &kp N4), UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_heart: emoji_heart {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_heart_macro>, <&emoji_heart_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_heart
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_fire_macro, /* 🔥 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N5 &kp N2 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp D &kp N2 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N5 &kp N2 &kp N5)
      #endif
    )
    emoji_fire: emoji_fire {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_fire_macro>, <&emoji_fire_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_fire
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_muscle_macro, /* 💪 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp A &kp A)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp A &kp A)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp A &kp A)
      #endif
    )
    emoji_muscle: emoji_muscle {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_muscle_macro>, <&emoji_muscle_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_muscle
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_climbing_macro, /* 🧗 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp D &kp N7)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp D &kp N7)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp D &kp N7)
      #endif
    )
    emoji_person_climbing: emoji_person_climbing {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_climbing_macro>, <&emoji_person_climbing_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_climbing
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_lab_coat_macro, /* 🥼 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N7 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N7 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N7 &kp C)
      #endif
    )
    emoji_lab_coat: emoji_lab_coat {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_lab_coat_macro>, <&emoji_lab_coat_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_lab_coat
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_rocket_macro, /* 🚀 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N8 &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N8 &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N8 &kp N0)
      #endif
    )
    emoji_rocket: emoji_rocket {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_rocket_macro>, <&emoji_rocket_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_rocket
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_joy_macro, /* 😂 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N0 &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N0 &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N0 &kp N2)
      #endif
    )
    emoji_joy: emoji_joy {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_joy_macro>, <&emoji_joy_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_joy
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_rofl_macro, /* 🤣 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N2 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N2 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N2 &kp N3)
      #endif
    )
    emoji_rofl: emoji_rofl {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_rofl_macro>, <&emoji_rofl_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_rofl
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_star_struck_macro, /* 🤩 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N2 &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N2 &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N2 &kp N9)
      #endif
    )
    emoji_star_struck: emoji_star_struck {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_star_struck_macro>, <&emoji_star_struck_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_star_struck
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_love_struck_macro, /* 😍 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N0 &kp D)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N0 &kp D)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N0 &kp D)
      #endif
    )
    emoji_love_struck: emoji_love_struck {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_love_struck_macro>, <&emoji_love_struck_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_love_struck
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_saluting_face_macro, /* 🫡 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp A &kp E &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp E &kp E &kp N1)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp A &kp E &kp N1)
      #endif
    )
    emoji_saluting_face: emoji_saluting_face {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_saluting_face_macro>, <&emoji_saluting_face_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_saluting_face
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_shocked_face_macro, /* 🤯 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N2 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N2 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N2 &kp F)
      #endif
    )
    emoji_shocked_face: emoji_shocked_face {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_shocked_face_macro>, <&emoji_shocked_face_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_shocked_face
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_cold_sweat_macro, /* 😰 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N3 &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N3 &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N3 &kp N0)
      #endif
    )
    emoji_cold_sweat: emoji_cold_sweat {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_cold_sweat_macro>, <&emoji_cold_sweat_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_cold_sweat
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_monocle_face_macro, /* 🧐 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp D &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp D &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp D &kp N0)
      #endif
    )
    emoji_monocle_face: emoji_monocle_face {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_monocle_face_macro>, <&emoji_monocle_face_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_monocle_face
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_snap_fingers_macro, /* 🫰 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp A &kp F &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp E &kp F &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp A &kp F &kp N0)
      #endif
    )
    emoji_snap_fingers: emoji_snap_fingers {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_snap_fingers_macro>, <&emoji_snap_fingers_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_snap_fingers
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_ok_hand_macro, /* 👌 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N4 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N4 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N4 &kp C)
      #endif
    )
    emoji_ok_hand: emoji_ok_hand {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_ok_hand_macro>, <&emoji_ok_hand_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_ok_hand
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_pray_macro, /* 🙏 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp F)
      #endif
    )
    emoji_pray: emoji_pray {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_pray_macro>, <&emoji_pray_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_pray
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_sweat_smile_macro, /* 😅 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N0 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N0 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N0 &kp N5)
      #endif
    )
    emoji_sweat_smile: emoji_sweat_smile {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sweat_smile_macro>, <&emoji_sweat_smile_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_sweat_smile
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_disappointed_macro, /* 😞 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N1 &kp E)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N1 &kp E)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N1 &kp E)
      #endif
    )
    emoji_disappointed: emoji_disappointed {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_disappointed_macro>, <&emoji_disappointed_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_disappointed
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_thinking_macro, /* 🤔 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N1 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N1 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N1 &kp N4)
      #endif
    )
    emoji_thinking: emoji_thinking {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_thinking_macro>, <&emoji_thinking_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_thinking
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_tipping_hand_macro, /* 💁 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N8 &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N8 &kp N1)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N8 &kp N1)
      #endif
    )
    emoji_person_tipping_hand: emoji_person_tipping_hand {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_tipping_hand_macro>, <&emoji_person_tipping_hand_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_tipping_hand
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_gesturing_ok_macro, /* 🙆 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp N6)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp N6)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp N6)
      #endif
    )
    emoji_person_gesturing_ok: emoji_person_gesturing_ok {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_gesturing_ok_macro>, <&emoji_person_gesturing_ok_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_gesturing_ok
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_bowing_macro, /* 🙇 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp N7)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp N7)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp N7)
      #endif
    )
    emoji_person_bowing: emoji_person_bowing {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_bowing_macro>, <&emoji_person_bowing_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_bowing
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_raising_hand_macro, /* 🙋 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp B)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp B)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp B)
      #endif
    )
    emoji_person_raising_hand: emoji_person_raising_hand {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_raising_hand_macro>, <&emoji_person_raising_hand_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_raising_hand
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_gesturing_no_macro, /* 🙅 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp N5)
      #endif
    )
    emoji_person_gesturing_no: emoji_person_gesturing_no {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_gesturing_no_macro>, <&emoji_person_gesturing_no_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_gesturing_no
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_person_shrugging_macro, /* 🤷 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N3 &kp N7)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N3 &kp N7)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N3 &kp N7)
      #endif
    )
    emoji_person_shrugging: emoji_person_shrugging {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_person_shrugging_macro>, <&emoji_person_shrugging_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_person_shrugging
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_checkoff_macro, /* ✅ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N7 &kp N0 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N7 &kp N0 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N7 &kp N0 &kp N5)
      #endif
    )
    emoji_checkoff: emoji_checkoff {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_checkoff_macro>, <&emoji_checkoff_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_checkoff
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_100_macro, /* 💯 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp A &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp A &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp A &kp F)
      #endif
    )
    emoji_100: emoji_100 {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_100_macro>, <&emoji_100_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_100
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_warning_macro, /* ⚠️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp A &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp A &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp A &kp N0), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_warning: emoji_warning {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_warning_macro>, <&emoji_warning_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_warning
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_x_macro, /* ❌ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N7 &kp N4 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N7 &kp N4 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N7 &kp N4 &kp C)
      #endif
    )
    emoji_x: emoji_x {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_x_macro>, <&emoji_x_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_x
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_question_macro, /* ❓ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N7 &kp N5 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N7 &kp N5 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N7 &kp N5 &kp N3)
      #endif
    )
    emoji_question: emoji_question {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_question_macro>, <&emoji_question_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_question
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_astronaut_macro, /* 🧑‍🚀 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp D &kp N1), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp N2 &kp N0 &kp N0 &kp D), UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N8 &kp N0)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp D &kp N1), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp N2 &kp N0 &kp N0 &kp D), UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N8 &kp N0)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp D &kp N1), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N0 &kp N0 &kp D), UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N8 &kp N0)
      #endif
    )
    emoji_astronaut: emoji_astronaut {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_astronaut_macro>, <&emoji_astronaut_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_astronaut
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_nerd_macro, /* 🤓 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N9 &kp N1 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp D &kp N1 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N9 &kp N1 &kp N3)
      #endif
    )
    emoji_nerd: emoji_nerd {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_nerd_macro>, <&emoji_nerd_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_nerd
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_sparkles_macro, /* ✨ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N7 &kp N2 &kp N8)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N7 &kp N2 &kp N8)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N7 &kp N2 &kp N8)
      #endif
    )
    emoji_sparkles: emoji_sparkles {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sparkles_macro>, <&emoji_sparkles_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_sparkles
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_raised_hands_macro, /* 🙌 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp C)
      #endif
    )
    emoji_raised_hands: emoji_raised_hands {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_raised_hands_macro>, <&emoji_raised_hands_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_raised_hands
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_point_up_macro, /* ☝️ */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N2 &kp N6 &kp N1 &kp D), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_LINUX(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp N2 &kp N6 &kp N1 &kp D), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_MACOS(&kp F &kp E &kp N0 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N2 &kp N6 &kp N1 &kp D), <&macro_wait_time UNICODE_SEQ_DELAY>, UNICODE_SEQ_WINDOWS(&kp N0 &kp F &kp E &kp N0 &kp F)
      #endif
    )
    emoji_point_up: emoji_point_up {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_point_up_macro>, <&emoji_point_up_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_point_up
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_thumbs_up_macro, /* 👍 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N4 &kp D)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N4 &kp D)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N4 &kp D)
      #endif
    )
    emoji_thumbs_up: emoji_thumbs_up {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_thumbs_up_macro>, <&emoji_thumbs_up_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_thumbs_up
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };

    //
    // characters
    //
    emoji_moon_complete: emoji_moon_complete {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_new_moon>, <&emoji_full_moon>;
        mods = <MOD_LSFT>;
    };
    emoji_moon_gibbous: emoji_moon_gibbous {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_waning_gibbous_moon>, <&emoji_waxing_gibbous_moon>;
        mods = <MOD_LSFT>;
    };
    emoji_moon_quarter: emoji_moon_quarter {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_last_quarter_moon>, <&emoji_first_quarter_moon>;
        mods = <MOD_LSFT>;
    };
    emoji_moon_crescent: emoji_moon_crescent {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_waning_crescent_moon>, <&emoji_waxing_crescent_moon>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_moon_stars_magic_macro, /* 🪄 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp A &kp N8 &kp N4)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp E &kp N8 &kp N4)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp A &kp N8 &kp N4)
      #endif
    )
    emoji_moon_stars_magic: emoji_moon_stars_magic {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_moon_stars_magic_macro>, <&emoji_moon_stars_magic_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_moon_stars_magic
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_moon_stars: emoji_moon_stars {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sparkles>, <&emoji_moon_stars_magic>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_face_smile_up_macro, /* 🙂 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp N2)
      #endif
    )
    emoji_face_smile_up: emoji_face_smile_up {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_smile_up_macro>, <&emoji_face_smile_up_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_smile_up
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_face_smile_down_macro, /* 🙃 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N4 &kp N3)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N4 &kp N3)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N4 &kp N3)
      #endif
    )
    emoji_face_smile_down: emoji_face_smile_down {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_smile_down_macro>, <&emoji_face_smile_down_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_smile_down
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_face_smile: emoji_face_smile {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_smile_up>, <&emoji_face_smile_down>;
        mods = <MOD_LSFT>;
    };
    emoji_face_laugh: emoji_face_laugh {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_joy>, <&emoji_rofl>;
        mods = <MOD_LSFT>;
    };
    emoji_face_eyes: emoji_face_eyes {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_star_struck>, <&emoji_love_struck>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_face_joke_wink_macro, /* 😉 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N0 &kp N9)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N0 &kp N9)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N0 &kp N9)
      #endif
    )
    emoji_face_joke_wink: emoji_face_joke_wink {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_joke_wink_macro>, <&emoji_face_joke_wink_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_joke_wink
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_face_joke_tounge_macro, /* 😜 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N1 &kp C)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N1 &kp C)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N1 &kp C)
      #endif
    )
    emoji_face_joke_tounge: emoji_face_joke_tounge {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_joke_tounge_macro>, <&emoji_face_joke_tounge_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_joke_tounge
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_face_joke: emoji_face_joke {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_joke_wink>, <&emoji_face_joke_tounge>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_face_fear_scared_macro, /* 😨 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N2 &kp N8)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N2 &kp N8)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N2 &kp N8)
      #endif
    )
    emoji_face_fear_scared: emoji_face_fear_scared {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_fear_scared_macro>, <&emoji_face_fear_scared_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_fear_scared
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    UNICODE(emoji_face_fear_scream_macro, /* 😱 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N3 &kp N1)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N3 &kp N1)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N3 &kp N1)
      #endif
    )
    emoji_face_fear_scream: emoji_face_fear_scream {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_fear_scream_macro>, <&emoji_face_fear_scream_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_fear_scream
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_face_fear: emoji_face_fear {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_fear_scared>, <&emoji_face_fear_scream>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_face_surprise_dizzy_macro, /* 😵 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N3 &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N3 &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N3 &kp N5)
      #endif
    )
    emoji_face_surprise_dizzy: emoji_face_surprise_dizzy {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_face_surprise_dizzy_macro>, <&emoji_face_surprise_dizzy_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_face_surprise_dizzy
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_face_surprise: emoji_face_surprise {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_shocked_face>, <&emoji_face_surprise_dizzy>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_gesture_attention_wave_macro, /* 👋 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N4 &kp B)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N4 &kp B)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N4 &kp B)
      #endif
    )
    emoji_gesture_attention_wave: emoji_gesture_attention_wave {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_gesture_attention_wave_macro>, <&emoji_gesture_attention_wave_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_gesture_attention_wave
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_gesture_attention: emoji_gesture_attention {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_snap_fingers>, <&emoji_gesture_attention_wave>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_gesture_approval_cool_macro, /* 😎 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N0 &kp E)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N0 &kp E)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N0 &kp E)
      #endif
    )
    emoji_gesture_approval_cool: emoji_gesture_approval_cool {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_gesture_approval_cool_macro>, <&emoji_gesture_approval_cool_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_gesture_approval_cool
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_gesture_approval: emoji_gesture_approval {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_ok_hand>, <&emoji_gesture_approval_cool>;
        mods = <MOD_LSFT>;
    };
    emoji_gesture_gratitude: emoji_gesture_gratitude {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_pray>, <&emoji_saluting_face>;
        mods = <MOD_LSFT>;
    };
    emoji_gesture_anxiety: emoji_gesture_anxiety {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_sweat_smile>, <&emoji_cold_sweat>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_gesture_despair_cry_macro, /* 😢 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N6 &kp N2 &kp N2)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp E &kp N2 &kp N2)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N6 &kp N2 &kp N2)
      #endif
    )
    emoji_gesture_despair_cry: emoji_gesture_despair_cry {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_gesture_despair_cry_macro>, <&emoji_gesture_despair_cry_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_gesture_despair_cry
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_gesture_despair: emoji_gesture_despair {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_disappointed>, <&emoji_gesture_despair_cry>;
        mods = <MOD_LSFT>;
    };
    emoji_gesture_curious: emoji_gesture_curious {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_thinking>, <&emoji_monocle_face>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_gesture_point_you_macro, /* 🫵 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp A &kp F &kp N5)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp E &kp D &kp E &kp F &kp N5)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp A &kp F &kp N5)
      #endif
    )
    emoji_gesture_point_you: emoji_gesture_point_you {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_gesture_point_you_macro>, <&emoji_gesture_point_you_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_gesture_point_you
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_gesture_point: emoji_gesture_point {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_point_up>, <&emoji_gesture_point_you>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_gesture_thumbs_down_macro, /* 👎 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N4 &kp E)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N4 &kp E)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N4 &kp E)
      #endif
    )
    emoji_gesture_thumbs_down: emoji_gesture_thumbs_down {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_gesture_thumbs_down_macro>, <&emoji_gesture_thumbs_down_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_gesture_thumbs_down
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_gesture_thumbs: emoji_gesture_thumbs {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_thumbs_up>, <&emoji_gesture_thumbs_down>;
        mods = <MOD_LSFT>;
    };
    UNICODE(emoji_gesture_hands_clap_macro, /* 👏 */
      #if UNICODE_TARGET_OS == 'L'
        UNICODE_SEQ_LINUX(&kp N1 &kp F &kp N4 &kp N4 &kp F)
      #elif UNICODE_TARGET_OS == 'M'
        UNICODE_SEQ_MACOS(&kp D &kp N8 &kp N3 &kp D &kp D &kp C &kp N4 &kp F)
      #elif UNICODE_TARGET_OS == 'W'
        UNICODE_SEQ_WINDOWS(&kp N0 &kp N1 &kp F &kp N4 &kp N4 &kp F)
      #endif
    )
    emoji_gesture_hands_clap: emoji_gesture_hands_clap {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_gesture_hands_clap_macro>, <&emoji_gesture_hands_clap_macro>;
        mods = <(~(
#ifdef WORLD_USE_COMPOSE_FOR_emoji_gesture_hands_clap
COMPOSE_MORPH_MODS
#else
UNICODE_MORPH_MODS
#endif
))>;
    };
    emoji_gesture_hands: emoji_gesture_hands {
        compatible = "zmk,behavior-mod-morph";
        #binding-cells = <0>;
        bindings = <&emoji_raised_hands>, <&emoji_gesture_hands_clap>;
        mods = <MOD_LSFT>;
    };
};
/*HACK*/};
#if EMOJI_GENDER_SIGN_PRESET == 'N'
    emoji_gender_sign_preset: &none {};
#elif EMOJI_GENDER_SIGN_PRESET == 'M'
    emoji_gender_sign_preset: &emoji_male_sign {};
#elif EMOJI_GENDER_SIGN_PRESET == 'F'
    emoji_gender_sign_preset: &emoji_female_sign {};
#endif

#if EMOJI_SKIN_TONE_PRESET == 'N'
    emoji_skin_tone_preset: &none {};
#elif EMOJI_SKIN_TONE_PRESET == 'L'
    emoji_skin_tone_preset: &emoji_light_skin_tone {};
#elif EMOJI_SKIN_TONE_PRESET == 'l'
    emoji_skin_tone_preset: &emoji_medium_light_skin_tone {};
#elif EMOJI_SKIN_TONE_PRESET == 'M'
    emoji_skin_tone_preset: &emoji_medium_skin_tone {};
#elif EMOJI_SKIN_TONE_PRESET == 'd'
    emoji_skin_tone_preset: &emoji_medium_dark_skin_tone {};
#elif EMOJI_SKIN_TONE_PRESET == 'D'
    emoji_skin_tone_preset: &emoji_dark_skin_tone {};
#endif

#if EMOJI_HAIR_STYLE_PRESET == 'N'
    emoji_hair_style_preset: &none {};
#elif EMOJI_HAIR_STYLE_PRESET == 'B'
    emoji_hair_style_preset: &emoji_bald {};
#elif EMOJI_HAIR_STYLE_PRESET == 'R'
    emoji_hair_style_preset: &emoji_red_hair {};
#elif EMOJI_HAIR_STYLE_PRESET == 'C'
    emoji_hair_style_preset: &emoji_curly_hair {};
#elif EMOJI_HAIR_STYLE_PRESET == 'W'
    emoji_hair_style_preset: &emoji_white_hair {};
#endif
/*HACK*//{

//////////////////////////////////////////////////////////////////////////
//
// Mouse keys (control mouse via keyboard) -- requires PR23 beta firmware:
// select "community.pr23.mouse-keys" from the drop-down menu located at
// Glove80 Layout Editor > Settings > Advanced Settings > Firmware Version
//
// - https://github.com/moergo-sc/zmk/pull/23
// - https://gist.github.com/krissen/dd27082e7ab0575619c7a31f4d2ec7ae
// - https://github.com/zmkfirmware/zmk/compare/main...urob:zmk:mouse-3.2
//
//////////////////////////////////////////////////////////////////////////

//
// MOUSE_MOTION_DELAY defines how long to wait (milliseconds) before starting
// to move the mouse pointer.
//
#ifndef MOUSE_MOTION_DELAY
#define MOUSE_MOTION_DELAY 0
#endif

//
// MOUSE_MOTION_ACCELERATION_EXPONENT sets how the mouse pointer accelerates:
//
// acceleration exponent 0: uniform speed
// acceleration exponent 1: uniform acceleration
// acceleration exponent 2: uniform jerk
//
#ifndef MOUSE_MOTION_ACCELERATION_EXPONENT
#define MOUSE_MOTION_ACCELERATION_EXPONENT 1
#endif

//
// MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED defines how long to wait (milliseconds)
// before the mouse pointer speed is suddenly boosted to the maximum value.
//
#ifndef MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED
#define MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED 300
#endif

//
// MOUSE_MOTION_MAXIMUM_SPEED defines how quickly the mouse pointer can move.
//
#ifndef MOUSE_MOTION_MAXIMUM_SPEED
#define MOUSE_MOTION_MAXIMUM_SPEED 600
#endif

//
// MOUSE_SCROLL_DELAY defines how long to wait (milliseconds) before starting
// to move the mouse pointer.
//
#ifndef MOUSE_SCROLL_DELAY
#define MOUSE_SCROLL_DELAY 0
#endif

//
// MOUSE_SCROLL_ACCELERATION_EXPONENT sets how the mouse pointer accelerates:
//
// acceleration exponent 0: uniform speed
// acceleration exponent 1: uniform acceleration
// acceleration exponent 2: uniform jerk
//
#ifndef MOUSE_SCROLL_ACCELERATION_EXPONENT
#define MOUSE_SCROLL_ACCELERATION_EXPONENT 0
#endif

//
// MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED defines how long to wait (milliseconds)
// before the mouse pointer speed is suddenly boosted to the maximum value.
//
#ifndef MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED
#define MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED 300
#endif

//
// MOUSE_SCROLL_MAXIMUM_SPEED defines how quickly the mouse wheel can scroll.
//
#ifndef MOUSE_SCROLL_MAXIMUM_SPEED
#define MOUSE_SCROLL_MAXIMUM_SPEED 10
#endif
/*HACK*/};
#if __has_include(<zmk/events/mouse_tick.h>)
    // ==== MOUSE-KEY <section begins> ====
    #define ZMK_MOUSE_DEFAULT_MOVE_VAL MOUSE_MOTION_MAXIMUM_SPEED
    #define ZMK_MOUSE_DEFAULT_SCRL_VAL MOUSE_SCROLL_MAXIMUM_SPEED
    #include <dt-bindings/zmk/mouse.h>
    &mmv {
      delay-ms = <MOUSE_MOTION_DELAY>;
      acceleration-exponent = <MOUSE_MOTION_ACCELERATION_EXPONENT>;
      time-to-max-speed-ms = <MOUSE_MOTION_TIME_TO_MAXIMUM_SPEED>;
    };
    &msc {
      delay-ms = <MOUSE_SCROLL_DELAY>;
      acceleration-exponent = <MOUSE_SCROLL_ACCELERATION_EXPONENT>;
      time-to-max-speed-ms = <MOUSE_SCROLL_TIME_TO_MAXIMUM_SPEED>;
    };
    // ==== MOUSE-KEY <section ends> =====
#else
    #define mkp none
    #define mmv none
    #define msc none
    #define LCLK
    #define MCLK
    #define RCLK
    #define MB1
    #define MB2
    #define MB3
    #define MB4
    #define MB5
    #define MB6
    #define MB7
    #define MB8
    #define MOVE_UP
    #define MOVE_DOWN
    #define MOVE_LEFT
    #define MOVE_RIGHT
    #define SCRL_UP
    #define SCRL_DOWN
    #define SCRL_LEFT
    #define SCRL_RIGHT
#endif
/*HACK*//{
