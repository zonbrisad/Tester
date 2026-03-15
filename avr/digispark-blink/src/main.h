/**
 *---------------------------------------------------------------------------
 * @brief    Testprogram for blinking green LED on digispark module
 *
 * @file     main.h
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-03-15
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------


// Macros -------------------------------------------------------------------

#define APP_NAME        "main"
#define APP_VERSION     "0.01"
#define APP_DESCRIPTION "Testprogram for blinking green LED on digispark module"
#define APP_LICENSE     ""
#define APP_AUTHOR      "Peter Malmberg"
#define APP_EMAIL       "<peter.malmberg@gmail.com>"
#define APP_ORG         "ACME"
#define APP_HOME        ""
#define APP_ICON        ""

// AVR Reset causes ---------------------------------------------------------
#define IS_POWER_ON_RESET()            (MCUSR & (1<<PORF))
#define IS_BROWN_OUT_RESET()           (MCUSR & (1<<BORF))
#define IS_WATCH_DOG_RESET()           (MCUSR & (1<<WDRF))
#define IS_JTAG_RESET_RESET()          (MCUSR & (1<<JTRF))
#define IS_EXTERNAL_RESET()            (MCUSR & (1<<EXTRF))
#define CLEAR_RESETS()                 MCUSR  &= (~31)              // clearing all reset causes

// AVR Reset MCU with watchdog ----------------------------------------------
#define RESET()                     wdt_enable(WDTO_500MS); while(1) {}


// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------


// Prototypes ---------------------------------------------------------------

