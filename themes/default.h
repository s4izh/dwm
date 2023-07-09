static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int gappx     = 5;        /* gaps between windows */

static const char normbgcolor[]     = "#222222";
static const char normbordercolor[] = "#444444";
static const char normfgcolor[]     = "#bbbbbb";
static const char selfgcolor[]      = "#eeeeee";
static const char selbgcolor[]      = "#005577";
static const char selbordercolor[]  = "#550000";
static char *colors[][3] = {
    /* 	             fg           bg           border           */
    [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
    [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
