static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 4;        /* gaps between windows */

static char normbgcolor[]           = "#2b3339";
static char normbordercolor[]       = "#2b3339";
static char normfgcolor[]           = "#d3c6aa";
static char selfgcolor[]            = "#cc6666";
static char selbordercolor[]        = "#d3c6aa";
static char selbgcolor[]            = "#2b3339";

static char *colors[][3] = {
                     /* fg           bg           border */
       /* [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor }, */
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
};
