#ifndef __PS3_MGR_EVT_SWEXP_H__
#define __PS3_MGR_EVT_SWEXP_H__
#include "ps3_mgr_evt_common.h"

enum
{ 
    PS3_EVTLOG_LOCAL = 1,
    PS3_EVTLOG_PD_COUNT_LOCAL = 2,
    PS3_EVTLOG_CTRL_INFO_LOCAL = 3,
    PS3_EVT_EXP_LOCAL = 4,
    PS3_EVT_EXP_PHY_LOCAL = 5,
    PS3_EVT_EXP_CONN_LOCAL = 6,
    PS3_EVTLOG_SW_CTRL_INFO_LOCAL = 7,
    PS3_EVTLOG_MAX_TYPE_LOCAL,
}; 

static inline const S8 * nameMgrEvtSwExpType(U32 e) 
{ 
    switch(e) {
    case PS3_EVTLOG_LOCAL:
      return "PS3_EVTLOG_LOCAL";
      break;
    case PS3_EVTLOG_PD_COUNT_LOCAL:
      return "PS3_EVTLOG_PD_COUNT_LOCAL";
      break;
    case PS3_EVTLOG_CTRL_INFO_LOCAL:
      return "PS3_EVTLOG_CTRL_INFO_LOCAL";
      break;
    case PS3_EVT_EXP_LOCAL:
      return "PS3_EVT_EXP_LOCAL";
      break;
    case PS3_EVT_EXP_PHY_LOCAL:
      return "PS3_EVT_EXP_PHY_LOCAL";
      break;
    case PS3_EVT_EXP_CONN_LOCAL:
      return "PS3_EVT_EXP_CONN_LOCAL";
      break;
    case PS3_EVTLOG_SW_CTRL_INFO_LOCAL:
      return "PS3_EVTLOG_SW_CTRL_INFO_LOCAL";
      break;
    default :
      return "PS3_EVTLOG_MAX_TYPE_LOCAL";
      break;
    }
} 

enum MgrEvtLogCode
{
    MGR_EVTLOG_EVTLOG_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVTLOG_LOCAL),
    MGR_SWITCH_EVTLOG_READY = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_EVTLOG_START + 0x1),
    MGR_SWITCH_EVTLOG_TEST = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_EVTLOG_START + 0x2),
    MGR_SWITCH_EVTLOG_OEM = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_EVTLOG_START + 0x3),
    MGR_SWITCH_EVTLOG_BPLANE = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_EVTLOG_START + 0x4),
    MGR_SWITCH_EVTLOG_SES = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_EVTLOG_START + 0x5),
    MGR_SWITCH_EVTLOG_SCSI = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_EVTLOG_START + 0x6),
    MGR_EVTLOG_EVTLOG_END = (MGR_EVTLOG_EVTLOG_START+0x7),
}; 

enum MgrEvtLogPdCountCode
{
    MGR_EVTLOG_PD_COUNT_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVTLOG_PD_COUNT_LOCAL),
    MGR_EVTLOG_PD_COUNT_END = (MGR_EVTLOG_PD_COUNT_START+0x1),
}; 

enum MgrEvtLogCtrlInfoCode
{
    MGR_EVTLOG_CTRL_INFO_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVTLOG_CTRL_INFO_LOCAL),
    MGR_EVT_EXP_UNUSED1 = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_CTRL_INFO_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_CTRL_INFO_START + 0x1),
    MGR_EVT_EXP_UNUSED2 = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_CTRL_INFO_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_CTRL_INFO_START + 0x2),
    MGR_EVT_EXP_UNUSED3 = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_CTRL_INFO_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_CTRL_INFO_START + 0x3),
    MGR_EVT_EXP_REBOOT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_CTRL_INFO_LOCAL, PS3_EVT_CLASS_WARNING, 
            MGR_EVTLOG_CTRL_INFO_START + 0x4),
    MGR_EVT_EXP_SHUTDOWN = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_CTRL_INFO_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVTLOG_CTRL_INFO_START + 0x5),
    MGR_EVT_EXP_EVENT_LOG_CLEARD = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_CTRL_INFO_LOCAL, PS3_EVT_CLASS_WARNING, 
            MGR_EVTLOG_CTRL_INFO_START + 0x6),
    MGR_EVTLOG_CTRL_INFO_END = (MGR_EVTLOG_CTRL_INFO_START+0x7),
}; 

enum MgrEvtLogExpInfoCode
{
    MGR_EVT_EXP_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVT_EXP_LOCAL),
    MGR_EVT_EXP_CFG_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x1),
    MGR_EVT_EXP_CLI_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x2),
    MGR_EVT_EXP_SES_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x3),
    MGR_EVT_EXP_SMPI_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x4),
    MGR_EVT_EXP_SMPT_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x5),
    MGR_EVT_EXP_SSPI_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x6),
    MGR_EVT_EXP_SSPT_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x7),
    MGR_EVT_EXP_SCE_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x8),
    MGR_EVT_EXP_TEST_LOG = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x9),
    MGR_EVT_EXP_TEST_WARN_LOG = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_WARNING, 
            MGR_EVT_EXP_START + 0xa),
    MGR_EVT_EXP_TEST_CRIT_LOG = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0xb),
    MGR_EVT_EXP_TEST_FATAL_LOG = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_FATAL, 
            MGR_EVT_EXP_START + 0xc),
    MGR_EVT_EXP_CEVA_INIT_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0xd),
    MGR_EVT_EXP_CEVA_QUEUE_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0xe),
    MGR_EVT_EXP_CEVA_MUTEX_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0xf),
    MGR_EVT_EXP_CEVA_FUNC_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x10),
    MGR_EVT_EXP_CEVA_READY = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x11),
    MGR_EVT_EXP_CEVA_NOT_READY = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x12),
    MGR_EVT_EXP_CEVA_SMP_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x13),
    MGR_EVT_EXP_CEVA_DMA_RX_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x14),
    MGR_EVT_EXP_CEVA_DMA_TX_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x15),
    MGR_EVT_EXP_SCE_ERR_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x16),
    MGR_EVT_EXP_SCE_ERR_NO_MEM = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x17),
    MGR_EVT_EXP_SCE_ERR_NO_SPC_EXP = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x18),
    MGR_EVT_EXP_SCE_ERR_NO_SPC_PHY = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x19),
    MGR_EVT_EXP_SCE_ERR_NO_SPC_PNED = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x1a),
    MGR_EVT_EXP_SCE_ERR_NO_SPC_REMOVE = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x1b),
    MGR_EVT_EXP_SCE_ERR_NO_SPC_DOWN = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x1c),
    MGR_EVT_EXP_SCE_ERR_BUSY = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x1d),
    MGR_EVT_EXP_SCE_ERR_LOOP = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x1e),
    MGR_EVT_EXP_SCE_ERR_T2T = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x1f),
    MGR_EVT_EXP_SCE_ERR_S2S = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x20),
    MGR_EVT_EXP_SCE_ERR_EXP_ON_DIRECT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x21),
    MGR_EVT_EXP_SCE_ERR_MULTIPLE_SUB = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x22),
    MGR_EVT_EXP_SCE_ERR_SMP_REQ = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x23),
    MGR_EVT_EXP_SCE_ERR_SMP_RSP = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x24),
    MGR_EVT_EXP_BPP_ERR_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x25),
    MGR_EVT_EXP_BPP_ERR_STORM = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x26),
    MGR_EVT_EXP_BPP_ERR_SOFT_SEND = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x27),
    MGR_EVT_EXP_SMPI_ERR_INIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x28),
    MGR_EVT_EXP_SMPI_ERR_TRANSMIT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x29),
    MGR_EVT_EXP_SMPI_ERR_RECV_TIMEOUT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x2a),
    MGR_EVT_EXP_SMPI_ERR_RECV_DMA = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x2b),
    MGR_EVT_EXP_SMPI_ERR_DO_RESET = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x2c),
    MGR_EVT_EXP_SMPI_ERR_OTHER = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x2d),
    MGR_EVT_EXP_SSPT_I_TIMEOUT_HW = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x2e),
    MGR_EVT_EXP_SSPT_I_TIMEOUT_SW = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x2f),
    MGR_EVT_EXP_SSPT_RX_DMA_IN_PROGRESS = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x30),
    MGR_EVT_EXP_SSPT_START_RX_DMA_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x31),
    MGR_EVT_EXP_SSPT_RX_CMD_LEN_ERR = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x32),
    MGR_EVT_EXP_SSPT_IO_FULL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x33),
    MGR_EVT_EXP_SSPT_IM_FULL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x34),
    MGR_EVT_EXP_SSPT_RX_DATA_ERR = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x35),
    MGR_EVT_EXP_SSPT_RX_TASK_ERR = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x36),
    MGR_EVT_EXP_SSPT_NOT_SUPPORT_TASK_FUNCTION = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x37),
    MGR_EVT_EXP_SSPT_NOT_SUPPORT_FRM_TYPE = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x38),
    MGR_EVT_EXP_SSPT_TX_PAUSE = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x39),
    MGR_EVT_EXP_SSPT_HARD_RESET = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x3a),
    MGR_EVT_EXP_SSPT_SOFT_RESET = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x3b),
    MGR_EVT_EXP_SSPT_INIT_FAIL = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVT_EXP_START + 0x3c),
    MGR_EVT_EXP_SSPT_SET_TIME = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_START + 0x3d),
    MGR_EVT_EXP_DOUBLE_BIT_ECC_ERR = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_LOCAL, PS3_EVT_CLASS_FATAL, 
            MGR_EVT_EXP_START + 0x3e),
    MGR_EVT_EXP_END = (MGR_EVT_EXP_START+0x3f),
}; 

enum MgrEvtLogExpPhyInfoCode
{
    MGR_EVT_EXP_PHY_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVT_EXP_PHY_LOCAL),
    MGR_EVT_EXP_DISCONNECT_RAID_HBA = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x1),
    MGR_EVT_EXP_DISCONNECT_EXP = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x2),
    MGR_EVT_EXP_DISK_OUT = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x3),
    MGR_EVT_EXP_PHY_ENABLE = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x4),
    MGR_EVT_EXP_PHY_DISABLE = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x5),
    MGR_EVT_EXP_PHY_HARD_RESET = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x6),
    MGR_EVT_EXP_PHY_LINK_RESET = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_PHY_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_PHY_START + 0x7),
    MGR_EVT_EXP_PHY_END = (MGR_EVT_EXP_PHY_START+0x8),
}; 

enum MgrEvtLogExpConnInfoCode
{
    MGR_EVT_EXP_CONN_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVT_EXP_CONN_LOCAL),
    MGR_EVT_EXP_CONNECT_RAID_HBA = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_CONN_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_CONN_START + 0x1),
    MGR_EVT_EXP_CONNECT_EXP = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_CONN_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_CONN_START + 0x2),
    MGR_EVT_EXP_DISK_IN = PS3_MK_EVT(PS3_EVT_TYPE_EXPANDER, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVT_EXP_CONN_LOCAL, PS3_EVT_CLASS_INFO, 
            MGR_EVT_EXP_CONN_START + 0x3),
    MGR_EVT_EXP_CONN_END = (MGR_EVT_EXP_CONN_START+0x4),
}; 

enum MgrEvtLogSwCtrlInfoCode
{
    MGR_EVTLOG_SW_CTRL_INFO_START = MGR_EVT_TYPE_BASE_LOCAL(PS3_EVTLOG_SW_CTRL_INFO_LOCAL),
    MGR_SWITCH_EVTLOG_CTRL_REBOOT = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_SW_CTRL_INFO_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVTLOG_SW_CTRL_INFO_START + 0x1),
    MGR_SWITCH_EVTLOG_CTRL_SHUTDOWN = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_SW_CTRL_INFO_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVTLOG_SW_CTRL_INFO_START + 0x2),
    MGR_SWITCH_EVTLOG_CTRL_EVENT_LOG_CLEARED = PS3_MK_EVT(PS3_EVT_TYPE_PCIESWITCH, PS3_EVT_EXP_EXTERNAL, 
            PS3_EVT_IS_BATCH_FALSE, PS3_EVTLOG_SW_CTRL_INFO_LOCAL, PS3_EVT_CLASS_CRITICAL, 
            MGR_EVTLOG_SW_CTRL_INFO_START + 0x3),
    MGR_EVTLOG_SW_CTRL_INFO_END = (MGR_EVTLOG_SW_CTRL_INFO_START+0x4),
}; 

static inline S8 const *swexpEvtLogCodeTrans(U32 opCode)
{
    U32 typeIndex = 0;
    U32 codeIndex = 0;
    const S8* pEvtTransStr = NULL;
    static S8 const *pEvtLogCodeInfo[PS3_EVTLOG_MAX_TYPE_LOCAL][MGR_EVT_TYPE_OFFSET] = {
        {
            "MGR_EVTLOG_EVTLOG_START",
            "MGR_SWITCH_EVTLOG_READY",
            "MGR_SWITCH_EVTLOG_TEST",
            "MGR_SWITCH_EVTLOG_OEM",
            "MGR_SWITCH_EVTLOG_BPLANE",
            "MGR_SWITCH_EVTLOG_SES",
            "MGR_SWITCH_EVTLOG_SCSI",
        },
        {
            "MGR_EVTLOG_PD_COUNT_START",
        },
        {
            "MGR_EVTLOG_CTRL_INFO_START",
            "MGR_EVT_EXP_UNUSED1",
            "MGR_EVT_EXP_UNUSED2",
            "MGR_EVT_EXP_UNUSED3",
            "MGR_EVT_EXP_REBOOT",
            "MGR_EVT_EXP_SHUTDOWN",
            "MGR_EVT_EXP_EVENT_LOG_CLEARD",
        },
        {
            "MGR_EVT_EXP_START",
            "MGR_EVT_EXP_CFG_INIT",
            "MGR_EVT_EXP_CLI_INIT",
            "MGR_EVT_EXP_SES_INIT",
            "MGR_EVT_EXP_SMPI_INIT",
            "MGR_EVT_EXP_SMPT_INIT",
            "MGR_EVT_EXP_SSPI_INIT",
            "MGR_EVT_EXP_SSPT_INIT",
            "MGR_EVT_EXP_SCE_INIT",
            "MGR_EVT_EXP_TEST_LOG",
            "MGR_EVT_EXP_TEST_WARN_LOG",
            "MGR_EVT_EXP_TEST_CRIT_LOG",
            "MGR_EVT_EXP_TEST_FATAL_LOG",
            "MGR_EVT_EXP_CEVA_INIT_FAIL",
            "MGR_EVT_EXP_CEVA_QUEUE_FAIL",
            "MGR_EVT_EXP_CEVA_MUTEX_FAIL",
            "MGR_EVT_EXP_CEVA_FUNC_FAIL",
            "MGR_EVT_EXP_CEVA_READY",
            "MGR_EVT_EXP_CEVA_NOT_READY",
            "MGR_EVT_EXP_CEVA_SMP_FAIL",
            "MGR_EVT_EXP_CEVA_DMA_RX_FAIL",
            "MGR_EVT_EXP_CEVA_DMA_TX_FAIL",
            "MGR_EVT_EXP_SCE_ERR_INIT",
            "MGR_EVT_EXP_SCE_ERR_NO_MEM",
            "MGR_EVT_EXP_SCE_ERR_NO_SPC_EXP",
            "MGR_EVT_EXP_SCE_ERR_NO_SPC_PHY",
            "MGR_EVT_EXP_SCE_ERR_NO_SPC_PNED",
            "MGR_EVT_EXP_SCE_ERR_NO_SPC_REMOVE",
            "MGR_EVT_EXP_SCE_ERR_NO_SPC_DOWN",
            "MGR_EVT_EXP_SCE_ERR_BUSY",
            "MGR_EVT_EXP_SCE_ERR_LOOP",
            "MGR_EVT_EXP_SCE_ERR_T2T",
            "MGR_EVT_EXP_SCE_ERR_S2S",
            "MGR_EVT_EXP_SCE_ERR_EXP_ON_DIRECT",
            "MGR_EVT_EXP_SCE_ERR_MULTIPLE_SUB",
            "MGR_EVT_EXP_SCE_ERR_SMP_REQ",
            "MGR_EVT_EXP_SCE_ERR_SMP_RSP",
            "MGR_EVT_EXP_BPP_ERR_INIT",
            "MGR_EVT_EXP_BPP_ERR_STORM",
            "MGR_EVT_EXP_BPP_ERR_SOFT_SEND",
            "MGR_EVT_EXP_SMPI_ERR_INIT",
            "MGR_EVT_EXP_SMPI_ERR_TRANSMIT",
            "MGR_EVT_EXP_SMPI_ERR_RECV_TIMEOUT",
            "MGR_EVT_EXP_SMPI_ERR_RECV_DMA",
            "MGR_EVT_EXP_SMPI_ERR_DO_RESET",
            "MGR_EVT_EXP_SMPI_ERR_OTHER",
            "MGR_EVT_EXP_SSPT_I_TIMEOUT_HW",
            "MGR_EVT_EXP_SSPT_I_TIMEOUT_SW",
            "MGR_EVT_EXP_SSPT_RX_DMA_IN_PROGRESS",
            "MGR_EVT_EXP_SSPT_START_RX_DMA_FAIL",
            "MGR_EVT_EXP_SSPT_RX_CMD_LEN_ERR",
            "MGR_EVT_EXP_SSPT_IO_FULL",
            "MGR_EVT_EXP_SSPT_IM_FULL",
            "MGR_EVT_EXP_SSPT_RX_DATA_ERR",
            "MGR_EVT_EXP_SSPT_RX_TASK_ERR",
            "MGR_EVT_EXP_SSPT_NOT_SUPPORT_TASK_FUNCTION",
            "MGR_EVT_EXP_SSPT_NOT_SUPPORT_FRM_TYPE",
            "MGR_EVT_EXP_SSPT_TX_PAUSE",
            "MGR_EVT_EXP_SSPT_HARD_RESET",
            "MGR_EVT_EXP_SSPT_SOFT_RESET",
            "MGR_EVT_EXP_SSPT_INIT_FAIL",
            "MGR_EVT_EXP_SSPT_SET_TIME",
            "MGR_EVT_EXP_DOUBLE_BIT_ECC_ERR",
        },
        {
            "MGR_EVT_EXP_PHY_START",
            "MGR_EVT_EXP_DISCONNECT_RAID_HBA",
            "MGR_EVT_EXP_DISCONNECT_EXP",
            "MGR_EVT_EXP_DISK_OUT",
            "MGR_EVT_EXP_PHY_ENABLE",
            "MGR_EVT_EXP_PHY_DISABLE",
            "MGR_EVT_EXP_PHY_HARD_RESET",
            "MGR_EVT_EXP_PHY_LINK_RESET",
        },
        {
            "MGR_EVT_EXP_CONN_START",
            "MGR_EVT_EXP_CONNECT_RAID_HBA",
            "MGR_EVT_EXP_CONNECT_EXP",
            "MGR_EVT_EXP_DISK_IN",
        },
        {
            "MGR_EVTLOG_SW_CTRL_INFO_START",
            "MGR_SWITCH_EVTLOG_CTRL_REBOOT",
            "MGR_SWITCH_EVTLOG_CTRL_SHUTDOWN",
            "MGR_SWITCH_EVTLOG_CTRL_EVENT_LOG_CLEARED",
        },
    };

    if (opCode >= (PS3_EVTLOG_MAX_TYPE_LOCAL * MGR_EVT_TYPE_OFFSET)) {
        goto end;
    };

    typeIndex = opCode / MGR_EVT_TYPE_OFFSET;
    codeIndex = opCode % MGR_EVT_TYPE_OFFSET;
    pEvtTransStr = pEvtLogCodeInfo[typeIndex][codeIndex];
end:
    return pEvtTransStr;
}

#endif 
