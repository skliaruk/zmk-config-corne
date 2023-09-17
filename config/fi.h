#define XXX &none
#define ___ &trans

// CONTROL CMD/WINDOWS SHIFT ALT/META/OPTION
#define FI_LCTRL &kp LCTRL // left control
#define FI_RCTRL &kp RCTRL // right control
#define FI_LGUI &kp LGUI   // left cmd
#define FI_RGUI &kp RGUI
#define FI_LALT &kp LALT
#define FI_RALT &kp RALT
#define FI_LSHFT &kp LSHFT
#define FI_RSHFT &kp RSHFT

// ARROWS
#define FI_UP &kp UP
#define FI_LEFT &kp LEFT
#define FI_DOWN &kp DOWN
#define FI_RIGHT &kp RIGHT

// SPACE CAPS TAB ENTER BACKSPACE ESCAPE FILETE
#define FI_SPACE &kp SPACE // Space
#define FI_CAPS &kp CAPS   // Caps Lock
#define FI_BSPC &kp BSPC   // Backspace
#define FI_RET &kp RET     // Enter
#define FI_TAB &kp TAB     // Tab
#define FI_FIL &kp FIL     // Delete

// PAGE UP PAGE DOWN HOME END
#define FI_PG_UP &kp PG_UP
#define FI_PG_DN &kp PG_DN
#define FI_HOME &kp HOME
#define FI_END &kp END

// FUNCTION KEYS
#define FI_F1 &kp F1
#define FI_F2 &kp F2
#define FI_F3 &kp F3
#define FI_F4 &kp F4
#define FI_F5 &kp F5
#define FI_F6 &kp F6
#define FI_F7 &kp F7
#define FI_F8 &kp F8
#define FI_F9 &kp F9
#define FI_F10 &kp F10
#define FI_F11 &kp F11
#define FI_F12 &kp F12
#define FI_F13 &kp F13
#define FI_F14 &kp F14
#define FI_F15 &kp F15
#define FI_F16 &kp F16
#define FI_F17 &kp F17
#define FI_F18 &kp F18
#define FI_F19 &kp F19
#define FI_F20 &kp F20
#define FI_F21 &kp F21
#define FI_F22 &kp F22
#define FI_F23 &kp F23
#define FI_F24 &kp F24

// SOUND / VOLUME
#define FI_VOL_UP &kp C_VOLUME_UP
#define FI_VOL_DN &kp C_VOLUME_DOWN
#define FI_MUTE &kp C_MUTE
#define FI_NEXT &kp C_NEXT
#define FI_PREV &kp C_PREVIOUS
#define FI_STOP &kp C_STOP
#define FI_PLAY &kp C_PLAY_PAUSE
#define FI_SHUFFLE &kp C_SHUFFLE

// DISPLAY BRIGHTNESS
#define FI_BRI_UP &kp C_BRI_UP
#define FI_BRI_DN &kp C_BRI_DN

// LANGUAGE
#define FI_LANG1 &kp LANG1
#define FI_LANG2 &kp LANG2
#define FI_LANG3 &kp LANG3
#define FI_LANG4 &kp LANG4
#define FI_LANG5 &kp LANG5
#define FI_LANG6 &kp LANG6
#define FI_LANG7 &kp LANG7
#define FI_LANG8 &kp LANG8
#define FI_LANG9 &kp LANG9

// Apple "Globe" key
// https://github.com/zmkfirmware/zmk/issues/947
// #define GLOBE CAPSLOCK

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FI_CARET &kp LS(LA(N6)) // ^
#define FI_CIRC &kp GRAVE // ^ (dead)
#define FI_1 &kp N1       // 1
#define FI_2 &kp N2       // 2
#define FI_3 &kp N3       // 3
#define FI_4 &kp N4       // 4
#define FI_5 &kp N5       // 5
#define FI_6 &kp N6       // 6
#define FI_7 &kp N7       // 7
#define FI_8 &kp N8       // 8
#define FI_9 &kp N9       // 9
#define FI_0 &kp N0       // 0
#define FI_SS &kp MINUS   // ß
#define FI_ACUT &kp EQUAL // ´ (dead)
// Row 2
#define FI_Q &kp Q       // Q
#define FI_W &kp W       // W
#define FI_E &kp E       // E
#define FI_R &kp R       // R
#define FI_T &kp T       // T
#define FI_Z &kp Y       // Z
#define FI_U &kp U       // U
#define FI_I &kp I       // I
#define FI_O &kp O       // O
#define FI_P &kp P       // P
#define FI_UDIA &kp LBKT // Ü
#define FI_PLUS &kp RBKT // +
// Row 3
#define FI_A &kp A            // A
#define FI_S &kp S            // S
#define FI_D &kp D            // D
#define FI_F &kp F            // F
#define FI_G &kp G            // G
#define FI_H &kp H            // H
#define FI_J &kp J            // J
#define FI_K &kp K            // K
#define FI_L &kp L            // L
#define FI_ODIA &kp SEMICOLON // Ö
#define FI_ADIA &kp APOS      // Ä
#define FI_HASH &kp BSLH      // #
// Row 4
#define FI_LABK &kp GRAVE // <
#define FI_Y &kp Z        // Y
#define FI_X &kp X        // X
#define FI_C &kp C        // C
#define FI_V &kp V        // V
#define FI_B &kp B        // B
#define FI_N &kp N        // N
#define FI_M &kp M        // M
#define FI_COMM &kp COMMA // ,
#define FI_DOT &kp DOT    // .
#define FI_MINS &kp SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FI_FIG  &kp LS(GRAVE) // °
#define FI_EXCL &kp LS(N1)    // !
#define FI_DQUO &kp LS(N2)    // "
#define FI_SECT &kp LS(N3)    // §
#define FI_DLR  &kp LS(N4)    // $
#define FI_PERC &kp LS(N5)    // %
#define FI_AMPR &kp LS(N6)    // &
#define FI_SLSH &kp LS(N7)    // /
#define FI_LPRN &kp LS(N8)    // (
#define FI_RPRN &kp LS(N9)    // )
#define FI_EQL  &kp LS(N0)    // =
#define FI_QUES &kp LS(MINUS)   // ?
#define FI_GRV  &kp LS(EQUAL) // ` (dead)
// Row 2
#define FI_ASTR &kp LS(RBKT) // *
// #define FI_STAR &kp RBRC // "*" FI_ASTR
// Row 3
#define FI_QUOT &kp LS(BSLH) // '
// Row 4
#define FI_RABK &kp LS(GRAVE) // >
#define FI_SCLN &kp LS(COMMA) // ;
#define FI_COLN &kp LS(DOT)  // :
#define FI_UNDS &kp LS(SLASH) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FI_DLQU &kp LA(GRAVE)   // „
#define FI_IEXL &kp LA(N1)    // ¡
#define FI_LDQU &kp LA(N2)    // “
#define FI_PILC &kp LA(N3)    // ¶
#define FI_CENT &kp LA(N4)    // ¢
#define FI_LBRC &kp LA(N5)    // [
#define FI_RBRC &kp LA(N6)    // ]
#define FI_PIPE &kp LA(N7)    // |
#define FI_LCBR &kp LA(N8)    // {
#define FI_RCBR &kp LA(N9)    // }
#define FI_NEQL &kp LA(N0)    // ≠
#define FI_IQUE &kp LA(MINUS)   // ¿
// Row 2
#define FI_LDAQ &kp LA(Q)    // «
#define FI_NARS &kp LA(W)    // ∑
#define FI_EURO &kp LA(E)    // €
#define FI_REGD &kp LA(R)    // ®
#define FI_DAGG &kp LA(T)    // †
#define FI_OMEG &kp LA(Z)    // Ω
#define FI_DIAE &kp LA(U)    // ¨ (dead)
#define FI_FRSL &kp LA(I)    // ⁄
#define FI_OSTR &kp LA(O)    // Ø
#define FI_PI   &kp LA(P)    // π
#define FI_BULT &kp LA(LBKT) // •
#define FI_PLMN &kp LA(RBKT) // ±
// Row 3
#define FI_ARNG &kp LA(A)    // Å
#define FI_SLQU &kp LA(S)    // ‚
#define FI_PDIF &kp LA(D)    // ∂
#define FI_FHK  &kp LA(F)    // ƒ
#define FI_COPY &kp LA(G)    // ©
#define FI_FORD &kp LA(H)    // ª
#define FI_MORD &kp LA(J)    // º
#define FI_INCR &kp LA(K)    // ∆
#define FI_AT   &kp LA(L)    // @
#define FI_OE   &kp LA(SEMICOLON) // Œ
#define FI_AE   &kp LA(APOS) // Æ
#define FI_LSQU &kp LA(BSLH) // ‘
// Row 4
#define FI_LTEQ &kp LA(GRAVE) // ≤
#define FI_YEN  &kp LA(Y)    // ¥
#define FI_AEQL &kp LA(X)    // ≈
#define FI_CCCE &kp LA(C)    // Ç
#define FI_SQRT &kp LA(V)    // √
#define FI_INTG &kp LA(B)    // ∫
#define FI_TILD &kp LA(N)    // ~ (dead)
#define FI_MICR &kp LA(M)    // µ
#define FI_INFN &kp LA(COMMA) // ∞
#define FI_ELLP &kp LA(DOT)  // …
#define FI_NDSH &kp LA(MINUS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FI_NOT  &kp LS(LA(N1))    // ¬
#define FI_RDQU &kp LS(LA(N2))    // ”
#define FI_PND  &kp LS(LA(N4))    // £
#define FI_FI   &kp LS(LA(N5))    // ﬁ
#define FI_BSLS &kp LS(LA(N7))    // (backslash)
#define FI_STIL &kp LS(LA(N8))    // ˜
#define FI_MDDT &kp LS(LA(N9))    // ·
#define FI_MACR &kp LS(LA(N0))    // ¯
#define FI_DOTA &kp LS(LA(MINUS))   // ˙
#define FI_RNGA &kp LS(LA(EQUAL)) // ˚
// Row 2
#define FI_RDAQ &kp LS(LA(Q))    // »
#define FI_PERM &kp LS(LA(E))    // ‰
#define FI_CEDL &kp LS(LA(R))    // ¸
#define FI_DACU &kp LS(LA(T))    // ˝
#define FI_CARN &kp LS(LA(Z))    // ˇ
#define FI_AACU &kp LS(LA(U))    // Á
#define FI_UCIR &kp LS(LA(I))    // Û
#define FI_NARP &kp LS(LA(P))    // ∏
#define FI_APPL &kp LS(LA(RPAR)) //  (Apple logo)
// Row 3
#define FI_IACU &kp LS(LA(S))    // Í
#define FI_TM   &kp LS(LA(D))    // ™
#define FI_IDIA &kp LS(LA(F))    // Ï
#define FI_IGRV &kp LS(LA(G))    // Ì
#define FI_OACU &kp LS(LA(H))    // Ó
#define FI_DLSI &kp LS(LA(J))    // ı
#define FI_FL   &kp LS(LA(L))    // ﬂ
// Row 4
#define FI_GTEQ &kp LS(LA(GRAVE)) // ≥
#define FI_DDAG &kp LS(LA(Y))    // ‡
#define FI_UGRV &kp LS(LA(X))    // Ù
#define FI_LOZN &kp LS(LA(V))    // ◊
#define FI_LSAQ &kp LS(LA(B))    // ‹
#define FI_RSAQ &kp LS(LA(N))    // ›
#define FI_BREV &kp LS(LA(M))    // ˘
#define FI_OGON &kp LS(LA(COMMA)) // ˛
#define FI_DIV  &kp LS(LA(DOT))  // ÷
#define FI_MDSH &kp LS(LA(MINUS)) // —

// FI_LN_XXX for linux and windows
#define FI_LN_LABK &kp NUBS // <
#define FI_LN_RABK &kp LS(NUBS) // >
#define FI_LN_LBRC &kp RA(N5) // [
#define FI_LN_RBRC &kp RA(N6) // ]
#define FI_LN_LPRN &kp LS(N8) // (
#define FI_LN_RPRN &kp LS(N9) // )
#define FI_LN_LCBR &kp RA(N8) // {
#define FI_LN_RCBR &kp RA(N9) // }
#define FI_LN_FSLH &kp LS(N7) // slash
#define FI_LN_BSLH &kp LS(RA(N7)) // backslash
#define FI_LN_PIPE &kp RA(NUBS) // pipe
#define FI_LN_AT &kp LS(RA(Q)) // @
#define FI_LN_AMPS &kp LS(N6) // &
#define FI_LN_TILFI &kp LS(RA(N8)) // ~
#define FI_LN_CARET &kp RA(APOS) // ^
#define FI_LN_DQUO &kp LS(N2) // "