/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",     /* after initialization */
	[INPUT] =  "#d8dee9",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
	[CAPS] = "#ebcb8b",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time before dpms */
static const int monitortime = 60;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=9;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=3;

/* default message */
static const char * message = "Screen Locked! Enter password to continiue.";

/* text color */
static const char * text_color = "#d8dee9";

/* text size */
static const char * font_name = "10x20";
