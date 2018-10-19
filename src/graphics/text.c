#include <graphics/text.h>
#include <graphics/color.h>
#include <graphics/drawing.h>

const unsigned char english8x12[] = {
		/* ' ' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '!' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x3C, 	/*  [  ****  ]  */
		0x3C, 	/*  [  ****  ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '"' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '#' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x36, 	/*  [  ** ** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x7F, 	/*  [ *******]  */
		0x36, 	/*  [  ** ** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x7F, 	/*  [ *******]  */
		0x36, 	/*  [  ** ** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '$' const unsigned charwidth: 8 */
		0x08, 	/*  [    *   ]  */
		0x3E, 	/*  [  ***** ]  */
		0x6B, 	/*  [ ** * **]  */
		0x68, 	/*  [ ** *   ]  */
		0x68, 	/*  [ ** *   ]  */
		0x3E, 	/*  [  ***** ]  */
		0x0B, 	/*  [    * **]  */
		0x0B, 	/*  [    * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x3E, 	/*  [  ***** ]  */
		0x08, 	/*  [    *   ]  */
		0x08, 	/*  [        ]  */
		
		/* '%' const unsigned charwidth: 8 */
		0x70, 	/*  [ ***    ]  */
		0xD8, 	/*  [** **   ]  */
		0xDA, 	/*  [** ** * ]  */
		0x76, 	/*  [ *** ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x6E, 	/*  [ ** *** ]  */
		0x5B, 	/*  [ * ** **]  */
		0x1B, 	/*  [   ** **]  */
		0x0E, 	/*  [    *** ]  */
		0x00, 	/*  [        ]  */
		
		/* '&' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x38, 	/*  [  ***   ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x38, 	/*  [  ***   ]  */
		0x6C, 	/*  [ ** **  ]  */
		0xC7, 	/*  [**   ***]  */
		0xC6, 	/*  [**   ** ]  */
		0x6E, 	/*  [ ** *** ]  */
		0x3B, 	/*  [  *** **]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* ''' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '(' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		
		/* ')' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		
		/* '*' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x36, 	/*  [  ** ** ]  */
		0x1C, 	/*  [   ***  ]  */
		0x7F, 	/*  [ *******]  */
		0x1C, 	/*  [   ***  ]  */
		0x36, 	/*  [  ** ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '+' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x7E, 	/*  [ ****** ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* ',' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x00, 	/*  [        ]  */
		
		/* '-' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '.' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '/' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x00, 	/*  [        ]  */
		
		/* '0' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x1C, 	/*  [   ***  ]  */
		0x36, 	/*  [  ** ** ]  */
		0x63, 	/*  [ **   **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x63, 	/*  [ **   **]  */
		0x36, 	/*  [  ** ** ]  */
		0x1C, 	/*  [   ***  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '1' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x0C, 	/*  [    **  ]  */
		0x1C, 	/*  [   ***  ]  */
		0x3C, 	/*  [  ****  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x3F, 	/*  [  ******]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '2' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '3' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x06, 	/*  [     ** ]  */
		0x1C, 	/*  [   ***  ]  */
		0x06, 	/*  [     ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '4' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x06, 	/*  [     ** ]  */
		0x0E, 	/*  [    *** ]  */
		0x1E, 	/*  [   **** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7F, 	/*  [ *******]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '5' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7C, 	/*  [ *****  ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '6' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x1C, 	/*  [   ***  ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '7' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '8' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '9' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x38, 	/*  [  ***   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* ':' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* ';' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x00, 	/*  [        ]  */
		
		/* '<' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x06, 	/*  [     ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '=' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '>' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x60, 	/*  [ **     ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '?' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '@' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0xC3, 	/*  [**    **]  */
		0xC3, 	/*  [**    **]  */
		0xCF, 	/*  [**  ****]  */
		0xDB, 	/*  [** ** **]  */
		0xDB, 	/*  [** ** **]  */
		0xCF, 	/*  [**  ****]  */
		0xC0, 	/*  [**      ]  */
		0x7F, 	/*  [ *******]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'A' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7E, 	/*  [ ****** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'B' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'C' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'D' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x78, 	/*  [ ****   ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x78, 	/*  [ ****   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'E' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7C, 	/*  [ *****  ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'F' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7C, 	/*  [ *****  ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'G' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x6E, 	/*  [ ** *** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'H' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7E, 	/*  [ ****** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'I' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'J' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'K' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x78, 	/*  [ ****   ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'L' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'M' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x63, 	/*  [ **   **]  */
		0x77, 	/*  [ *** ***]  */
		0x7F, 	/*  [ *******]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'N' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x73, 	/*  [ ***  **]  */
		0x7B, 	/*  [ **** **]  */
		0x6F, 	/*  [ ** ****]  */
		0x67, 	/*  [ **  ***]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'O' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'P' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'Q' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x0C, 	/*  [    **  ]  */
		0x06, 	/*  [     ** ]  */
		
		/* 'R' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'S' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x60, 	/*  [ **     ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x06, 	/*  [     ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'T' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'U' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'V' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'W' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x3E, 	/*  [  ***** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'X' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'Y' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'Z' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '[' const unsigned charwidth: 8 */
		0x3C, 	/*  [  ****  ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x3C, 	/*  [  ****  ]  */
		
		/* '\' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x00, 	/*  [        ]  */
		
		/* ']' const unsigned charwidth: 8 */
		0x3C, 	/*  [  ****  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x3C, 	/*  [  ****  ]  */
		
		/* '^' const unsigned charwidth: 8 */
		0x18, 	/*  [   **   ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '_' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0xFF, 	/*  [********]  */
		
		/* '`' const unsigned charwidth: 8 */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'a' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'b' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'c' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'd' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'e' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7E, 	/*  [ ****** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'f' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x1C, 	/*  [   ***  ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x78, 	/*  [ ****   ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'g' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3E, 	/*  [  ***** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x06, 	/*  [     ** ]  */
		0x7C, 	/*  [ *****  ]  */
		
		/* 'h' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'i' const unsigned charwidth: 8 */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x78, 	/*  [ ****   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'j' const unsigned charwidth: 8 */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x0C, 	/*  [    **  ]  */
		0x78, 	/*  [ ****   ]  */
		
		/* 'k' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x78, 	/*  [ ****   ]  */
		0x6C, 	/*  [ ** **  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'l' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x78, 	/*  [ ****   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'm' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x63, 	/*  [ **   **]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'n' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'o' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'p' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		
		/* 'q' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3E, 	/*  [  ***** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		
		/* 'r' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7C, 	/*  [ *****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 's' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x3E, 	/*  [  ***** ]  */
		0x60, 	/*  [ **     ]  */
		0x60, 	/*  [ **     ]  */
		0x3C, 	/*  [  ****  ]  */
		0x06, 	/*  [     ** ]  */
		0x06, 	/*  [     ** ]  */
		0x7C, 	/*  [ *****  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 't' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x78, 	/*  [ ****   ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x30, 	/*  [  **    ]  */
		0x1C, 	/*  [   ***  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'u' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'v' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'w' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x63, 	/*  [ **   **]  */
		0x6B, 	/*  [ ** * **]  */
		0x6B, 	/*  [ ** * **]  */
		0x3E, 	/*  [  ***** ]  */
		0x36, 	/*  [  ** ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'x' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3C, 	/*  [  ****  ]  */
		0x18, 	/*  [   **   ]  */
		0x3C, 	/*  [  ****  ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* 'y' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x66, 	/*  [ **  ** ]  */
		0x3E, 	/*  [  ***** ]  */
		0x06, 	/*  [     ** ]  */
		0x7C, 	/*  [ *****  ]  */
		
		/* 'z' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x7E, 	/*  [ ****** ]  */
		0x06, 	/*  [     ** ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x60, 	/*  [ **     ]  */
		0x7E, 	/*  [ ****** ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		
		/* '{' const unsigned charwidth: 8 */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x00, 	/*  [        ]  */
		
		/* '|' const unsigned charwidth: 8 */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x00, 	/*  [        ]  */
		
		/* '}' const unsigned charwidth: 8 */
		0x30, 	/*  [  **    ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x0C, 	/*  [    **  ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x18, 	/*  [   **   ]  */
		0x30, 	/*  [  **    ]  */
		0x00, 	/*  [        ]  */
		
		/* '~' const unsigned charwidth: 8 */
		0x00, 	/*  [        ]  */
		0x76, 	/*  [ *** ** ]  */
		0xDC, 	/*  [** ***  ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
		0x00, 	/*  [        ]  */
};

struct font system = {
	8,
	12,
	0,
	english8x12,
};

struct font * in_use = &system;

void draw_glyph(uint16_t x, uint16_t y, uint8_t width, uint8_t height, uint8_t scanline, const unsigned char * buffer)
{
	uint16_t x1, y1;
	uint16_t color = get_pen();
	for (y1 = 0; y1 < height; ++y1) {
		for (x1 = 0; x1 < width; ++x1) {
			uint32_t byte = (y1 * scanline) + (x1 >> 3);
			uint8_t bit = 7 - (x1 & 7);
			if (buffer[byte] & (1 << bit)) {
				set_pixel(x + x1, y + y1, color);
			}
		}
	}
}

struct font * get_font()
{
	return in_use;
}

struct font * set_font(struct font *fnt)
{
	struct font *t = in_use;
	if (fnt == 0)
		in_use = &system;
	else
		in_use = fnt;
	return t;
}

void render_text(uint16_t x, uint16_t y, char* text)
{
	const unsigned char * glyph;
	uint8_t c;
	uint8_t width = in_use->width;
	uint16_t scanline = (in_use->width + 7) / 8;
	uint16_t bytes_per_glyph = scanline * in_use->height;
	while (*text != '\0') {
		c = *text;
		if (c < 0x20 || c > 0x7e)
			c = 0x20;
		c -= 0x20;
		glyph = in_use->data + (c * bytes_per_glyph);
		if (in_use->widths)
			width = in_use->widths[c];
		draw_glyph(x, y, width, in_use->height, scanline, glyph);
		++text;
		x += width;
	}
}

