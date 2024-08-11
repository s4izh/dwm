static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 7;        /* gaps between windows */

static const char normbgcolor[]     = "#222222";
static const char normbordercolor[] = "#444444";
static const char normfgcolor[]     = "#bbbbbb";
static const char selfgcolor[]      = "#222222";
static const char selbgcolor[]      = "#9FAF30";
static const char selbordercolor[]  = "#9FAF30";
static char *colors[][3] = {
    /* 	             fg           bg           border           */
    [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
    [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
