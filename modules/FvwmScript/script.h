typedef union {  char *str;
	  int number;
       } YYSTYPE;
#define STR     257
#define GSTR    258
#define VAR     259
#define FONT    260
#define NUMBER  261
#define WINDOWTITLE     262
#define WINDOWSIZE      263
#define WINDOWPOSITION  264
#define FORECOLOR       265
#define BACKCOLOR       266
#define SHADCOLOR       267
#define LICOLOR 268
#define COLORSET        269
#define OBJECT  270
#define INIT    271
#define PERIODICTASK    272
#define QUITFUNC        273
#define MAIN    274
#define END     275
#define PROP    276
#define TYPE    277
#define SIZE    278
#define POSITION        279
#define VALUE   280
#define VALUEMIN        281
#define VALUEMAX        282
#define TITLE   283
#define SWALLOWEXEC     284
#define ICON    285
#define FLAGS   286
#define WARP    287
#define WRITETOFILE     288
#define HIDDEN  289
#define NOFOCUS 290
#define NORELIEFSTRING  291
#define CENTER  292
#define LEFT    293
#define RIGHT   294
#define CASE    295
#define SINGLECLIC      296
#define DOUBLECLIC      297
#define BEG     298
#define POINT   299
#define EXEC    300
#define HIDE    301
#define SHOW    302
#define CHFONT  303
#define CHFORECOLOR     304
#define CHBACKCOLOR     305
#define CHCOLORSET      306
#define KEY     307
#define GETVALUE        308
#define GETMINVALUE     309
#define GETMAXVALUE     310
#define GETFORE 311
#define GETBACK 312
#define GETHILIGHT      313
#define GETSHADOW       314
#define CHVALUE 315
#define CHVALUEMAX      316
#define CHVALUEMIN      317
#define ADD     318
#define DIV     319
#define MULT    320
#define GETTITLE        321
#define GETOUTPUT       322
#define STRCOPY 323
#define NUMTOHEX        324
#define HEXTONUM        325
#define QUIT    326
#define LAUNCHSCRIPT    327
#define GETSCRIPTFATHER 328
#define SENDTOSCRIPT    329
#define RECEIVFROMSCRIPT        330
#define GET     331
#define SET     332
#define SENDSIGN        333
#define REMAINDEROFDIV  334
#define GETTIME 335
#define GETSCRIPTARG    336
#define GETPID  337
#define SENDMSGANDGET   338
#define PARSE   339
#define LASTSTRING      340
#define IF      341
#define THEN    342
#define ELSE    343
#define FOR     344
#define TO      345
#define DO      346
#define WHILE   347
#define BEGF    348
#define ENDF    349
#define EQUAL   350
#define INFEQ   351
#define SUPEQ   352
#define INF     353
#define SUP     354
#define DIFF    355


extern YYSTYPE yylval;
