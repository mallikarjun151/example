#ifndef lint
static  char    Sccs_id[] = "@(#)%Portal Version: fm_mks_pol.c:RWSmod7.3.1Int:1:2007-Sep-07 06:26:05 %";
#endif

#include <stdio.h>
#include "pcm.h"
#include "ops/bill.h"
#include "cm_fm.h"
#include "pin_errs.h"
#include "pin_bill.h"
#include "pin_cust.h"
#include "pinlog.h"
#include "pin_os.h"
#include "pcm_ops.h"

EXPORT_OP void
op_mks_pol(
        cm_nap_connection_t     *connp,
        u_int                   opcode,
        u_int                   flags,
        pin_flist_t             *in_flistp,
        pin_flist_t             **ret_flistpp,
        pin_errbuf_t            *ebufp);



/*******************************************************************
 * Main routine for the PCM_OP_BILL_POL_PREP_BILLNO  command
 *******************************************************************/
void
op_mks_pol(
        cm_nap_connection_t     *connp,
        u_int                   opcode,
        u_int                   flags,
        pin_flist_t             *in_flistp,
        pin_flist_t             **ret_flistpp,
        pin_errbuf_t            *ebufp)
{
        pcm_context_t           *ctxp = connp->dm_ctx;
        pin_flist_t             *r_flistp = NULL;

        /***********************************************************
         * Null out results until we have some.
         ***********************************************************/
        *ret_flistpp = NULL;
        PIN_ERR_CLEAR_ERR(ebufp);
         /***********************************************************
         * Insanity check.
         ***********************************************************/
        if (opcode != PCM_OP_MKS_POL) {
                pin_set_err(ebufp, PIN_ERRLOC_FM,
                        PIN_ERRCLASS_SYSTEM_DETERMINATE,
                        PIN_ERR_BAD_OPCODE, 0, 0, opcode);
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                        "bad opcode in op_mks_pol", ebufp);
                return;
        }

        /***********************************************************
         * Debug: What did we get?
         ***********************************************************/
        PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                "op_mks_pol input flist", in_flistp);

        /***********************************************************
         * Call main function to do it
         ***********************************************************/
        fm_mks_pol(ctxp, flags, in_flistp, &r_flistp, ebufp);

        /***********************************************************
         * Results.
         ***********************************************************/
        if (PIN_ERR_IS_ERR(ebufp)) {
                *ret_flistpp = (pin_flist_t *)NULL;
                PIN_FLIST_DESTROY(r_flistp, NULL);
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                        "op_mks_pol error", ebufp);
        } else {
                *ret_flistpp = r_flistp;
                PIN_ERR_CLEAR_ERR(ebufp);
                PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                        "op_mks_pol return flist", r_flistp);
        }

        return;
}
                                                            
