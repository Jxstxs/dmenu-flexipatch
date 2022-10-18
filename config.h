static int topbar = 1;
static int opacity = 1;

static int fuzzy = 1;
static int center = 1;
static int min_width = 500;
static char *fonts[] = {"monospace:size=10"};

static const char *prompt = NULL;

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
    [SchemeNorm] = {OPAQUE, baralpha, borderalpha},
    [SchemeSel] = {OPAQUE, baralpha, borderalpha},
    [SchemeBorder] = {OPAQUE, OPAQUE, OPAQUE},
    [SchemeSelHighlight] = {OPAQUE, baralpha, borderalpha},
    [SchemeNormHighlight] = {OPAQUE, baralpha, borderalpha},
};

static char *colors[][2] = {
        [SchemeNorm] = {"#bbbbbb", "#222222"},
        [SchemeSel] = {"#eeeeee", "#005577"},
        [SchemeOut] = {"#000000", "#00ffff"},
        [SchemeBorder] = {"#000000", "#005577"},
        [SchemeSelHighlight] = {"#ffc978", "#005577"},
        [SchemeNormHighlight] = {"#ffc978", "#222222"},
};

static unsigned int lines = 0;
static unsigned int columns = 0;
static const char worddelimiters[] = " ";
static unsigned int border_width = 1;
