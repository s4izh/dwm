static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 7;        /* gaps between windows */

static char normbgcolor[]           = "#1d1f21";
static char normbordercolor[]       = "#1d1f21";
static char normfgcolor[]           = "#c5c8c6";
static char selfgcolor[]            = "#c5c8c6";
static char selbordercolor[]        = "#c5c8c6";
static char selbgcolor[]            = "#333343";

static char *colors[][3] = {
                     /* fg           bg           border */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
