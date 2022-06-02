// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_init_sub__TOP__0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBit(c+400,"reset", false,-1);
    tracep->declQuad(c+401,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+403,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+405,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+407,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+408,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+409,"io_uart_out_valid", false,-1);
    tracep->declBus(c+410,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+411,"io_uart_in_valid", false,-1);
    tracep->declBus(c+412,"io_uart_in_ch", false,-1, 7,0);
    tracep->declBit(c+413,"io_memAXI_0_aw_ready", false,-1);
    tracep->declBit(c+414,"io_memAXI_0_aw_valid", false,-1);
    tracep->declQuad(c+415,"io_memAXI_0_aw_bits_addr", false,-1, 63,0);
    tracep->declBus(c+417,"io_memAXI_0_aw_bits_prot", false,-1, 2,0);
    tracep->declBus(c+418,"io_memAXI_0_aw_bits_id", false,-1, 3,0);
    tracep->declBus(c+419,"io_memAXI_0_aw_bits_user", false,-1, 0,0);
    tracep->declBus(c+420,"io_memAXI_0_aw_bits_len", false,-1, 7,0);
    tracep->declBus(c+421,"io_memAXI_0_aw_bits_size", false,-1, 2,0);
    tracep->declBus(c+422,"io_memAXI_0_aw_bits_burst", false,-1, 1,0);
    tracep->declBit(c+423,"io_memAXI_0_aw_bits_lock", false,-1);
    tracep->declBus(c+424,"io_memAXI_0_aw_bits_cache", false,-1, 3,0);
    tracep->declBus(c+425,"io_memAXI_0_aw_bits_qos", false,-1, 3,0);
    tracep->declBit(c+426,"io_memAXI_0_w_ready", false,-1);
    tracep->declBit(c+427,"io_memAXI_0_w_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+428+i*2,"io_memAXI_0_w_bits_data", true,(i+0), 63,0);
    }
    tracep->declBus(c+436,"io_memAXI_0_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+437,"io_memAXI_0_w_bits_last", false,-1);
    tracep->declBit(c+438,"io_memAXI_0_b_ready", false,-1);
    tracep->declBit(c+439,"io_memAXI_0_b_valid", false,-1);
    tracep->declBus(c+440,"io_memAXI_0_b_bits_resp", false,-1, 1,0);
    tracep->declBus(c+441,"io_memAXI_0_b_bits_id", false,-1, 3,0);
    tracep->declBus(c+442,"io_memAXI_0_b_bits_user", false,-1, 0,0);
    tracep->declBit(c+443,"io_memAXI_0_ar_ready", false,-1);
    tracep->declBit(c+444,"io_memAXI_0_ar_valid", false,-1);
    tracep->declQuad(c+445,"io_memAXI_0_ar_bits_addr", false,-1, 63,0);
    tracep->declBus(c+447,"io_memAXI_0_ar_bits_prot", false,-1, 2,0);
    tracep->declBus(c+448,"io_memAXI_0_ar_bits_id", false,-1, 3,0);
    tracep->declBus(c+449,"io_memAXI_0_ar_bits_user", false,-1, 0,0);
    tracep->declBus(c+450,"io_memAXI_0_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+451,"io_memAXI_0_ar_bits_size", false,-1, 2,0);
    tracep->declBus(c+452,"io_memAXI_0_ar_bits_burst", false,-1, 1,0);
    tracep->declBit(c+453,"io_memAXI_0_ar_bits_lock", false,-1);
    tracep->declBus(c+454,"io_memAXI_0_ar_bits_cache", false,-1, 3,0);
    tracep->declBus(c+455,"io_memAXI_0_ar_bits_qos", false,-1, 3,0);
    tracep->declBit(c+456,"io_memAXI_0_r_ready", false,-1);
    tracep->declBit(c+457,"io_memAXI_0_r_valid", false,-1);
    tracep->declBus(c+458,"io_memAXI_0_r_bits_resp", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+459+i*2,"io_memAXI_0_r_bits_data", true,(i+0), 63,0);
    }
    tracep->declBit(c+467,"io_memAXI_0_r_bits_last", false,-1);
    tracep->declBus(c+468,"io_memAXI_0_r_bits_id", false,-1, 3,0);
    tracep->declBus(c+469,"io_memAXI_0_r_bits_user", false,-1, 0,0);
    tracep->pushNamePrefix("SimTop ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBit(c+400,"reset", false,-1);
    tracep->declQuad(c+401,"io_logCtrl_log_begin", false,-1, 63,0);
    tracep->declQuad(c+403,"io_logCtrl_log_end", false,-1, 63,0);
    tracep->declQuad(c+405,"io_logCtrl_log_level", false,-1, 63,0);
    tracep->declBit(c+407,"io_perfInfo_clean", false,-1);
    tracep->declBit(c+408,"io_perfInfo_dump", false,-1);
    tracep->declBit(c+409,"io_uart_out_valid", false,-1);
    tracep->declBus(c+410,"io_uart_out_ch", false,-1, 7,0);
    tracep->declBit(c+411,"io_uart_in_valid", false,-1);
    tracep->declBus(c+412,"io_uart_in_ch", false,-1, 7,0);
    tracep->declBit(c+413,"io_memAXI_0_aw_ready", false,-1);
    tracep->declBit(c+414,"io_memAXI_0_aw_valid", false,-1);
    tracep->declQuad(c+415,"io_memAXI_0_aw_bits_addr", false,-1, 63,0);
    tracep->declBus(c+417,"io_memAXI_0_aw_bits_prot", false,-1, 2,0);
    tracep->declBus(c+418,"io_memAXI_0_aw_bits_id", false,-1, 3,0);
    tracep->declBus(c+419,"io_memAXI_0_aw_bits_user", false,-1, 0,0);
    tracep->declBus(c+420,"io_memAXI_0_aw_bits_len", false,-1, 7,0);
    tracep->declBus(c+421,"io_memAXI_0_aw_bits_size", false,-1, 2,0);
    tracep->declBus(c+422,"io_memAXI_0_aw_bits_burst", false,-1, 1,0);
    tracep->declBit(c+423,"io_memAXI_0_aw_bits_lock", false,-1);
    tracep->declBus(c+424,"io_memAXI_0_aw_bits_cache", false,-1, 3,0);
    tracep->declBus(c+425,"io_memAXI_0_aw_bits_qos", false,-1, 3,0);
    tracep->declBit(c+426,"io_memAXI_0_w_ready", false,-1);
    tracep->declBit(c+427,"io_memAXI_0_w_valid", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+428+i*2,"io_memAXI_0_w_bits_data", true,(i+0), 63,0);
    }
    tracep->declBus(c+436,"io_memAXI_0_w_bits_strb", false,-1, 7,0);
    tracep->declBit(c+437,"io_memAXI_0_w_bits_last", false,-1);
    tracep->declBit(c+438,"io_memAXI_0_b_ready", false,-1);
    tracep->declBit(c+439,"io_memAXI_0_b_valid", false,-1);
    tracep->declBus(c+440,"io_memAXI_0_b_bits_resp", false,-1, 1,0);
    tracep->declBus(c+441,"io_memAXI_0_b_bits_id", false,-1, 3,0);
    tracep->declBus(c+442,"io_memAXI_0_b_bits_user", false,-1, 0,0);
    tracep->declBit(c+443,"io_memAXI_0_ar_ready", false,-1);
    tracep->declBit(c+444,"io_memAXI_0_ar_valid", false,-1);
    tracep->declQuad(c+445,"io_memAXI_0_ar_bits_addr", false,-1, 63,0);
    tracep->declBus(c+447,"io_memAXI_0_ar_bits_prot", false,-1, 2,0);
    tracep->declBus(c+448,"io_memAXI_0_ar_bits_id", false,-1, 3,0);
    tracep->declBus(c+449,"io_memAXI_0_ar_bits_user", false,-1, 0,0);
    tracep->declBus(c+450,"io_memAXI_0_ar_bits_len", false,-1, 7,0);
    tracep->declBus(c+451,"io_memAXI_0_ar_bits_size", false,-1, 2,0);
    tracep->declBus(c+452,"io_memAXI_0_ar_bits_burst", false,-1, 1,0);
    tracep->declBit(c+453,"io_memAXI_0_ar_bits_lock", false,-1);
    tracep->declBus(c+454,"io_memAXI_0_ar_bits_cache", false,-1, 3,0);
    tracep->declBus(c+455,"io_memAXI_0_ar_bits_qos", false,-1, 3,0);
    tracep->declBit(c+456,"io_memAXI_0_r_ready", false,-1);
    tracep->declBit(c+457,"io_memAXI_0_r_valid", false,-1);
    tracep->declBus(c+458,"io_memAXI_0_r_bits_resp", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+459+i*2,"io_memAXI_0_r_bits_data", true,(i+0), 63,0);
    }
    tracep->declBit(c+467,"io_memAXI_0_r_bits_last", false,-1);
    tracep->declBus(c+468,"io_memAXI_0_r_bits_id", false,-1, 3,0);
    tracep->declBus(c+469,"io_memAXI_0_r_bits_user", false,-1, 0,0);
    tracep->declBit(c+485,"aw_ready", false,-1);
    tracep->declBit(c+486,"aw_valid", false,-1);
    tracep->declQuad(c+487,"aw_addr", false,-1, 63,0);
    tracep->declBus(c+489,"aw_prot", false,-1, 2,0);
    tracep->declBus(c+490,"aw_id", false,-1, 3,0);
    tracep->declBus(c+491,"aw_user", false,-1, 0,0);
    tracep->declBus(c+492,"aw_len", false,-1, 7,0);
    tracep->declBus(c+493,"aw_size", false,-1, 2,0);
    tracep->declBus(c+494,"aw_burst", false,-1, 1,0);
    tracep->declBit(c+495,"aw_lock", false,-1);
    tracep->declBus(c+496,"aw_cache", false,-1, 3,0);
    tracep->declBus(c+497,"aw_qos", false,-1, 3,0);
    tracep->declBus(c+498,"aw_region", false,-1, 3,0);
    tracep->declBit(c+499,"w_ready", false,-1);
    tracep->declBit(c+500,"w_valid", false,-1);
    tracep->declQuad(c+501,"w_data", false,-1, 63,0);
    tracep->declBus(c+503,"w_strb", false,-1, 7,0);
    tracep->declBit(c+504,"w_last", false,-1);
    tracep->declBus(c+505,"w_user", false,-1, 0,0);
    tracep->declBit(c+506,"b_ready", false,-1);
    tracep->declBit(c+507,"b_valid", false,-1);
    tracep->declBus(c+508,"b_resp", false,-1, 1,0);
    tracep->declBus(c+509,"b_id", false,-1, 3,0);
    tracep->declBus(c+510,"b_user", false,-1, 0,0);
    tracep->declBit(c+443,"ar_ready", false,-1);
    tracep->declBit(c+3,"ar_valid", false,-1);
    tracep->declQuad(c+4,"ar_addr", false,-1, 63,0);
    tracep->declBus(c+511,"ar_prot", false,-1, 2,0);
    tracep->declBus(c+512,"ar_id", false,-1, 3,0);
    tracep->declBus(c+513,"ar_user", false,-1, 0,0);
    tracep->declBus(c+6,"ar_len", false,-1, 7,0);
    tracep->declBus(c+514,"ar_size", false,-1, 2,0);
    tracep->declBus(c+515,"ar_burst", false,-1, 1,0);
    tracep->declBit(c+516,"ar_lock", false,-1);
    tracep->declBus(c+517,"ar_cache", false,-1, 3,0);
    tracep->declBus(c+512,"ar_qos", false,-1, 3,0);
    tracep->declBus(c+518,"ar_region", false,-1, 3,0);
    tracep->declBit(c+7,"r_ready", false,-1);
    tracep->declBit(c+457,"r_valid", false,-1);
    tracep->declBus(c+458,"r_resp", false,-1, 1,0);
    tracep->declQuad(c+470,"r_data", false,-1, 63,0);
    tracep->declBit(c+467,"r_last", false,-1);
    tracep->declBus(c+468,"r_id", false,-1, 3,0);
    tracep->declBus(c+469,"r_user", false,-1, 0,0);
    tracep->declBit(c+519,"if_valid", false,-1);
    tracep->declBit(c+8,"if_ready", false,-1);
    tracep->declBit(c+516,"req", false,-1);
    tracep->declQuad(c+9,"if_data_read", false,-1, 63,0);
    tracep->declQuad(c+520,"data_write", false,-1, 63,0);
    tracep->declQuad(c+11,"if_addr", false,-1, 63,0);
    tracep->declBus(c+522,"if_size", false,-1, 1,0);
    tracep->declBus(c+13,"if_resp", false,-1, 1,0);
    tracep->pushNamePrefix("u_axi_rw ");
    tracep->declBus(c+523,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+523,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+523,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+523,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+524,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+525,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBit(c+400,"reset", false,-1);
    tracep->declBit(c+519,"rw_valid_i", false,-1);
    tracep->declBit(c+8,"rw_ready_o", false,-1);
    tracep->declBit(c+516,"rw_req_i", false,-1);
    tracep->declArray(c+14,"data_read_o", false,-1, 64,0);
    tracep->declArray(c+526,"data_write_i", false,-1, 64,0);
    tracep->declArray(c+17,"rw_addr_i", false,-1, 64,0);
    tracep->declBus(c+522,"rw_size_i", false,-1, 1,0);
    tracep->declBus(c+13,"rw_resp_o", false,-1, 1,0);
    tracep->declBit(c+485,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+486,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+487,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+489,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+490,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+491,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+492,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+493,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+494,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+495,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+496,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+497,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+498,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+499,"axi_w_ready_i", false,-1);
    tracep->declBit(c+500,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+501,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+503,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+504,"axi_w_last_o", false,-1);
    tracep->declBus(c+505,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+506,"axi_b_ready_o", false,-1);
    tracep->declBit(c+507,"axi_b_valid_i", false,-1);
    tracep->declBus(c+508,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+509,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+510,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+443,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+3,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+4,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+511,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+512,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+513,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+6,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+514,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+515,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+516,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+517,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+512,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+518,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+7,"axi_r_ready_o", false,-1);
    tracep->declBit(c+457,"axi_r_valid_i", false,-1);
    tracep->declBus(c+458,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+470,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+467,"axi_r_last_i", false,-1);
    tracep->declBus(c+468,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+469,"axi_r_user_i", false,-1, 0,0);
    tracep->declBit(c+516,"w_trans", false,-1);
    tracep->declBit(c+519,"r_trans", false,-1);
    tracep->declBit(c+516,"w_valid", false,-1);
    tracep->declBit(c+519,"r_valid", false,-1);
    tracep->declBit(c+529,"aw_hs", false,-1);
    tracep->declBit(c+1,"w_hs", false,-1);
    tracep->declBit(c+530,"b_hs", false,-1);
    tracep->declBit(c+472,"ar_hs", false,-1);
    tracep->declBit(c+325,"r_hs", false,-1);
    tracep->declBit(c+2,"w_done", false,-1);
    tracep->declBit(c+326,"r_done", false,-1);
    tracep->declBit(c+326,"trans_done", false,-1);
    tracep->declBus(c+531,"W_STATE_IDLE", false,-1, 1,0);
    tracep->declBus(c+515,"W_STATE_ADDR", false,-1, 1,0);
    tracep->declBus(c+522,"W_STATE_WRITE", false,-1, 1,0);
    tracep->declBus(c+532,"W_STATE_RESP", false,-1, 1,0);
    tracep->declBus(c+531,"R_STATE_IDLE", false,-1, 1,0);
    tracep->declBus(c+515,"R_STATE_ADDR", false,-1, 1,0);
    tracep->declBus(c+522,"R_STATE_READ", false,-1, 1,0);
    tracep->declBus(c+20,"w_state", false,-1, 1,0);
    tracep->declBus(c+21,"r_state", false,-1, 1,0);
    tracep->declBit(c+22,"w_state_idle", false,-1);
    tracep->declBit(c+23,"w_state_addr", false,-1);
    tracep->declBit(c+24,"w_state_write", false,-1);
    tracep->declBit(c+25,"w_state_resp", false,-1);
    tracep->declBit(c+26,"r_state_idle", false,-1);
    tracep->declBit(c+3,"r_state_addr", false,-1);
    tracep->declBit(c+7,"r_state_read", false,-1);
    tracep->declBus(c+27,"len", false,-1, 7,0);
    tracep->declBit(c+473,"len_reset", false,-1);
    tracep->declBit(c+116,"len_incr_en", false,-1);
    tracep->declBus(c+533,"ALIGNED_WIDTH", false,-1, 31,0);
    tracep->declBus(c+534,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+533,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+535,"MASK_WIDTH", false,-1, 31,0);
    tracep->declBus(c+525,"TRANS_LEN", false,-1, 31,0);
    tracep->declBus(c+536,"BLOCK_TRANS", false,-1, 31,0);
    tracep->declBit(c+28,"aligned", false,-1);
    tracep->declBit(c+516,"size_b", false,-1);
    tracep->declBit(c+516,"size_h", false,-1);
    tracep->declBit(c+519,"size_w", false,-1);
    tracep->declBit(c+516,"size_d", false,-1);
    tracep->declBus(c+29,"addr_op1", false,-1, 3,0);
    tracep->declBus(c+537,"addr_op2", false,-1, 3,0);
    tracep->declBus(c+30,"addr_end", false,-1, 3,0);
    tracep->declBit(c+31,"overstep", false,-1);
    tracep->declBus(c+6,"axi_len", false,-1, 7,0);
    tracep->declBus(c+514,"axi_size", false,-1, 2,0);
    tracep->declQuad(c+4,"axi_addr", false,-1, 63,0);
    tracep->declBus(c+32,"aligned_offset_l", false,-1, 5,0);
    tracep->declBus(c+33,"aligned_offset_h", false,-1, 5,0);
    tracep->declArray(c+34,"mask", false,-1, 127,0);
    tracep->declQuad(c+38,"mask_l", false,-1, 63,0);
    tracep->declQuad(c+40,"mask_h", false,-1, 63,0);
    tracep->declBus(c+512,"axi_id", false,-1, 3,0);
    tracep->declBus(c+516,"axi_user", false,-1, 0,0);
    tracep->declBit(c+8,"rw_ready", false,-1);
    tracep->declBit(c+326,"rw_ready_nxt", false,-1);
    tracep->declBit(c+117,"rw_ready_en", false,-1);
    tracep->declBus(c+13,"rw_resp", false,-1, 1,0);
    tracep->declBit(c+474,"rw_resp_nxt", false,-1);
    tracep->declBit(c+326,"resp_en", false,-1);
    tracep->declQuad(c+327,"axi_r_data_l", false,-1, 63,0);
    tracep->declQuad(c+475,"axi_r_data_h", false,-1, 63,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_cpu ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBit(c+400,"reset", false,-1);
    tracep->declBit(c+519,"if_valid", false,-1);
    tracep->declBit(c+8,"if_ready", false,-1);
    tracep->declQuad(c+9,"if_data_read", false,-1, 63,0);
    tracep->declQuad(c+11,"if_addr", false,-1, 63,0);
    tracep->declBus(c+522,"if_size", false,-1, 1,0);
    tracep->declBus(c+13,"if_resp", false,-1, 1,0);
    tracep->declQuad(c+42,"pc", false,-1, 63,0);
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBit(c+477,"rs1_r_ena", false,-1);
    tracep->declBus(c+478,"rs1_r_addr", false,-1, 4,0);
    tracep->declBit(c+516,"rs2_r_ena", false,-1);
    tracep->declBus(c+538,"rs2_r_addr", false,-1, 4,0);
    tracep->declBit(c+329,"rd_w_ena", false,-1);
    tracep->declBus(c+330,"rd_w_addr", false,-1, 4,0);
    tracep->declBus(c+331,"inst_type", false,-1, 4,0);
    tracep->declBus(c+332,"inst_opcode", false,-1, 7,0);
    tracep->declQuad(c+479,"op1", false,-1, 63,0);
    tracep->declQuad(c+481,"op2", false,-1, 63,0);
    tracep->declQuad(c+483,"r_data1", false,-1, 63,0);
    tracep->declQuad(c+539,"r_data2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+333+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declBus(c+331,"inst_type_o", false,-1, 4,0);
    tracep->declQuad(c+397,"rd_data", false,-1, 63,0);
    tracep->declBit(c+45,"fetched", false,-1);
    tracep->declBit(c+182,"cmt_wen", false,-1);
    tracep->declBus(c+183,"cmt_wdest", false,-1, 7,0);
    tracep->declQuad(c+184,"cmt_wdata", false,-1, 63,0);
    tracep->declQuad(c+186,"cmt_pc", false,-1, 63,0);
    tracep->declBus(c+188,"cmt_inst", false,-1, 31,0);
    tracep->declBit(c+189,"cmt_valid", false,-1);
    tracep->declBit(c+190,"trap", false,-1);
    tracep->declBus(c+191,"trap_code", false,-1, 7,0);
    tracep->declQuad(c+192,"cycleCnt", false,-1, 63,0);
    tracep->declQuad(c+194,"instrCnt", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+196+i*2,"regs_diff", true,(i+0), 63,0);
    }
    tracep->declBit(c+45,"inst_valid", false,-1);
    tracep->pushNamePrefix("DifftestArchFpRegState ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBus(c+541,"coreid", false,-1, 7,0);
    tracep->declQuad(c+539,"fpr_0", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_1", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_2", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_3", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_4", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_5", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_6", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_7", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_8", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_9", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_10", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_11", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_12", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_13", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_14", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_15", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_16", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_17", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_18", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_19", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_20", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_21", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_22", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_23", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_24", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_25", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_26", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_27", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_28", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_29", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_30", false,-1, 63,0);
    tracep->declQuad(c+539,"fpr_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestArchIntRegState ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBus(c+541,"coreid", false,-1, 7,0);
    tracep->declQuad(c+260,"gpr_0", false,-1, 63,0);
    tracep->declQuad(c+262,"gpr_1", false,-1, 63,0);
    tracep->declQuad(c+264,"gpr_2", false,-1, 63,0);
    tracep->declQuad(c+266,"gpr_3", false,-1, 63,0);
    tracep->declQuad(c+268,"gpr_4", false,-1, 63,0);
    tracep->declQuad(c+270,"gpr_5", false,-1, 63,0);
    tracep->declQuad(c+272,"gpr_6", false,-1, 63,0);
    tracep->declQuad(c+274,"gpr_7", false,-1, 63,0);
    tracep->declQuad(c+276,"gpr_8", false,-1, 63,0);
    tracep->declQuad(c+278,"gpr_9", false,-1, 63,0);
    tracep->declQuad(c+280,"gpr_10", false,-1, 63,0);
    tracep->declQuad(c+282,"gpr_11", false,-1, 63,0);
    tracep->declQuad(c+284,"gpr_12", false,-1, 63,0);
    tracep->declQuad(c+286,"gpr_13", false,-1, 63,0);
    tracep->declQuad(c+288,"gpr_14", false,-1, 63,0);
    tracep->declQuad(c+290,"gpr_15", false,-1, 63,0);
    tracep->declQuad(c+292,"gpr_16", false,-1, 63,0);
    tracep->declQuad(c+294,"gpr_17", false,-1, 63,0);
    tracep->declQuad(c+296,"gpr_18", false,-1, 63,0);
    tracep->declQuad(c+298,"gpr_19", false,-1, 63,0);
    tracep->declQuad(c+300,"gpr_20", false,-1, 63,0);
    tracep->declQuad(c+302,"gpr_21", false,-1, 63,0);
    tracep->declQuad(c+304,"gpr_22", false,-1, 63,0);
    tracep->declQuad(c+306,"gpr_23", false,-1, 63,0);
    tracep->declQuad(c+308,"gpr_24", false,-1, 63,0);
    tracep->declQuad(c+310,"gpr_25", false,-1, 63,0);
    tracep->declQuad(c+312,"gpr_26", false,-1, 63,0);
    tracep->declQuad(c+314,"gpr_27", false,-1, 63,0);
    tracep->declQuad(c+316,"gpr_28", false,-1, 63,0);
    tracep->declQuad(c+318,"gpr_29", false,-1, 63,0);
    tracep->declQuad(c+320,"gpr_30", false,-1, 63,0);
    tracep->declQuad(c+322,"gpr_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestCSRState ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBus(c+541,"coreid", false,-1, 7,0);
    tracep->declBus(c+532,"priviledgeMode", false,-1, 1,0);
    tracep->declQuad(c+539,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+539,"sstatus", false,-1, 63,0);
    tracep->declQuad(c+539,"mepc", false,-1, 63,0);
    tracep->declQuad(c+539,"sepc", false,-1, 63,0);
    tracep->declQuad(c+539,"mtval", false,-1, 63,0);
    tracep->declQuad(c+539,"stval", false,-1, 63,0);
    tracep->declQuad(c+539,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+539,"stvec", false,-1, 63,0);
    tracep->declQuad(c+539,"mcause", false,-1, 63,0);
    tracep->declQuad(c+539,"scause", false,-1, 63,0);
    tracep->declQuad(c+539,"satp", false,-1, 63,0);
    tracep->declQuad(c+539,"mip", false,-1, 63,0);
    tracep->declQuad(c+539,"mie", false,-1, 63,0);
    tracep->declQuad(c+539,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+539,"sscratch", false,-1, 63,0);
    tracep->declQuad(c+539,"mideleg", false,-1, 63,0);
    tracep->declQuad(c+539,"medeleg", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestInstrCommit ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBus(c+541,"coreid", false,-1, 7,0);
    tracep->declBus(c+541,"index", false,-1, 7,0);
    tracep->declBit(c+189,"valid", false,-1);
    tracep->declQuad(c+186,"pc", false,-1, 63,0);
    tracep->declBus(c+188,"instr", false,-1, 31,0);
    tracep->declBit(c+516,"skip", false,-1);
    tracep->declBit(c+516,"isRVC", false,-1);
    tracep->declBit(c+516,"scFailed", false,-1);
    tracep->declBit(c+182,"wen", false,-1);
    tracep->declBus(c+183,"wdest", false,-1, 7,0);
    tracep->declQuad(c+184,"wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestTrapEvent ");
    tracep->declBit(c+399,"clock", false,-1);
    tracep->declBus(c+541,"coreid", false,-1, 7,0);
    tracep->declBit(c+190,"valid", false,-1);
    tracep->declBus(c+324,"code", false,-1, 2,0);
    tracep->declQuad(c+186,"pc", false,-1, 63,0);
    tracep->declQuad(c+192,"cycleCnt", false,-1, 63,0);
    tracep->declQuad(c+194,"instrCnt", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Exe_stage ");
    tracep->declBit(c+400,"rst", false,-1);
    tracep->declBus(c+331,"inst_type_i", false,-1, 4,0);
    tracep->declBus(c+332,"inst_opcode", false,-1, 7,0);
    tracep->declQuad(c+479,"op1", false,-1, 63,0);
    tracep->declQuad(c+481,"op2", false,-1, 63,0);
    tracep->declBus(c+331,"inst_type_o", false,-1, 4,0);
    tracep->declQuad(c+397,"rd_data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Id_stage ");
    tracep->declBit(c+400,"rst", false,-1);
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declQuad(c+483,"rs1_data", false,-1, 63,0);
    tracep->declQuad(c+539,"rs2_data", false,-1, 63,0);
    tracep->declBit(c+477,"rs1_r_ena", false,-1);
    tracep->declBus(c+478,"rs1_r_addr", false,-1, 4,0);
    tracep->declBit(c+516,"rs2_r_ena", false,-1);
    tracep->declBus(c+538,"rs2_r_addr", false,-1, 4,0);
    tracep->declBit(c+329,"rd_w_ena", false,-1);
    tracep->declBus(c+330,"rd_w_addr", false,-1, 4,0);
    tracep->declBus(c+331,"inst_type", false,-1, 4,0);
    tracep->declBus(c+332,"inst_opcode", false,-1, 7,0);
    tracep->declQuad(c+479,"op1", false,-1, 63,0);
    tracep->declQuad(c+481,"op2", false,-1, 63,0);
    tracep->declBit(c+46,"inst_addi", false,-1);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"rd", false,-1, 4,0);
    tracep->declBus(c+49,"func3", false,-1, 2,0);
    tracep->declBus(c+50,"rs1", false,-1, 4,0);
    tracep->declBus(c+51,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("If_stage ");
    tracep->declBit(c+399,"clk", false,-1);
    tracep->declBit(c+400,"rst", false,-1);
    tracep->declQuad(c+42,"pc", false,-1, 63,0);
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBit(c+519,"if_valid", false,-1);
    tracep->declBit(c+8,"if_ready", false,-1);
    tracep->declQuad(c+9,"if_data_read", false,-1, 63,0);
    tracep->declQuad(c+11,"if_addr", false,-1, 63,0);
    tracep->declBus(c+522,"if_size", false,-1, 1,0);
    tracep->declBus(c+13,"if_resp", false,-1, 1,0);
    tracep->declBit(c+45,"fetched", false,-1);
    tracep->declBit(c+8,"handshake_done", false,-1);
    tracep->declQuad(c+542,"addr", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+399,"clk", false,-1);
    tracep->declBit(c+400,"rst", false,-1);
    tracep->declBus(c+330,"w_addr", false,-1, 4,0);
    tracep->declQuad(c+397,"w_data", false,-1, 63,0);
    tracep->declBit(c+329,"w_ena", false,-1);
    tracep->declBus(c+478,"r_addr1", false,-1, 4,0);
    tracep->declQuad(c+483,"r_data1", false,-1, 63,0);
    tracep->declBit(c+477,"r_ena1", false,-1);
    tracep->declBus(c+538,"r_addr2", false,-1, 4,0);
    tracep->declQuad(c+539,"r_data2", false,-1, 63,0);
    tracep->declBit(c+516,"r_ena2", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+118+i*2,"regs_o", true,(i+0), 63,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+52+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_top\n"); );
    // Body
    VSimTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSimTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSimTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSimTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimTop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_full_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__1;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__2;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__3;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__4;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__5;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__6;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__7;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__8;
    VlWide<4>/*127:0*/ __Vtemp_he9eb5b00__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__1;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__9;
    VlWide<4>/*127:0*/ __Vtemp_h4038c311__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__2;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__10;
    VlWide<4>/*127:0*/ __Vtemp_h604c0fc1__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf47a88b__3;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__11;
    VlWide<4>/*127:0*/ __Vtemp_hab772c2a__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6f3975__12;
    VlWide<3>/*95:0*/ __Vtemp_h94883541__0;
    // Body
    tracep->fullBit(oldp+1,(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs));
    tracep->fullBit(oldp+2,(((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs) 
                             & (IData)(vlSelf->SimTop__DOT__w_last))));
    tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state))));
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__0, vlSelf->SimTop__DOT__if_addr);
    tracep->fullQData(oldp+4,((0xfffffffffffffff8ULL 
                               & (((QData)((IData)(
                                                   __Vtemp_hae6f3975__0[1U])) 
                                   << 0x20U) | (0xfffffffffffffff8ULL 
                                                & (QData)((IData)(
                                                                  __Vtemp_hae6f3975__0[0U])))))),64);
    tracep->fullCData(oldp+6,(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len),8);
    tracep->fullBit(oldp+7,((2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state))));
    tracep->fullBit(oldp+8,(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready));
    tracep->fullQData(oldp+9,((((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o[0U])))),64);
    tracep->fullQData(oldp+11,(vlSelf->SimTop__DOT__if_addr),64);
    tracep->fullCData(oldp+13,(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_resp),2);
    tracep->fullWData(oldp+14,(vlSelf->SimTop__DOT____Vcellout__u_axi_rw__data_read_o),65);
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__1, vlSelf->SimTop__DOT__if_addr);
    tracep->fullWData(oldp+17,(__Vtemp_hae6f3975__1),65);
    tracep->fullCData(oldp+20,(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state),2);
    tracep->fullCData(oldp+21,(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state),2);
    tracep->fullBit(oldp+22,((0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
    tracep->fullBit(oldp+23,((1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
    tracep->fullBit(oldp+24,((2U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
    tracep->fullBit(oldp+25,((3U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_state))));
    tracep->fullBit(oldp+26,((0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state))));
    tracep->fullCData(oldp+27,(vlSelf->SimTop__DOT__u_axi_rw__DOT__len),8);
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__2, vlSelf->SimTop__DOT__if_addr);
    tracep->fullBit(oldp+28,((0U == (7U & __Vtemp_hae6f3975__2[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__3, vlSelf->SimTop__DOT__if_addr);
    tracep->fullCData(oldp+29,((7U & __Vtemp_hae6f3975__3[0U])),4);
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__4, vlSelf->SimTop__DOT__if_addr);
    tracep->fullCData(oldp+30,((0xfU & ((IData)(3U) 
                                        + (7U & __Vtemp_hae6f3975__4[0U])))),4);
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__5, vlSelf->SimTop__DOT__if_addr);
    tracep->fullBit(oldp+31,((1U & (((IData)(3U) + 
                                     (7U & __Vtemp_hae6f3975__5[0U])) 
                                    >> 3U))));
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__6, vlSelf->SimTop__DOT__if_addr);
    tracep->fullCData(oldp+32,((0x38U & (__Vtemp_hae6f3975__6[0U] 
                                         << 3U))),6);
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__7, vlSelf->SimTop__DOT__if_addr);
    tracep->fullCData(oldp+33,((0x3fU & (- (0x38U & 
                                            (__Vtemp_hae6f3975__7[0U] 
                                             << 3U))))),6);
    __Vtemp_hcf47a88b__0[0U] = 0xffffffffU;
    __Vtemp_hcf47a88b__0[1U] = 0U;
    __Vtemp_hcf47a88b__0[2U] = 0U;
    __Vtemp_hcf47a88b__0[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__8, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp_he9eb5b00__0, __Vtemp_hcf47a88b__0, 
                  (0x38U & (__Vtemp_hae6f3975__8[0U] 
                            << 3U)));
    tracep->fullWData(oldp+34,(__Vtemp_he9eb5b00__0),128);
    __Vtemp_hcf47a88b__1[0U] = 0xffffffffU;
    __Vtemp_hcf47a88b__1[1U] = 0U;
    __Vtemp_hcf47a88b__1[2U] = 0U;
    __Vtemp_hcf47a88b__1[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__9, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp_h4038c311__0, __Vtemp_hcf47a88b__1, 
                  (0x38U & (__Vtemp_hae6f3975__9[0U] 
                            << 3U)));
    tracep->fullQData(oldp+38,((((QData)((IData)(__Vtemp_h4038c311__0[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             __Vtemp_h4038c311__0[0U])))),64);
    __Vtemp_hcf47a88b__2[0U] = 0xffffffffU;
    __Vtemp_hcf47a88b__2[1U] = 0U;
    __Vtemp_hcf47a88b__2[2U] = 0U;
    __Vtemp_hcf47a88b__2[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__10, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp_h604c0fc1__0, __Vtemp_hcf47a88b__2, 
                  (0x38U & (__Vtemp_hae6f3975__10[0U] 
                            << 3U)));
    tracep->fullQData(oldp+40,((((QData)((IData)(__Vtemp_h604c0fc1__0[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             __Vtemp_h604c0fc1__0[2U])))),64);
    tracep->fullQData(oldp+42,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
    tracep->fullIData(oldp+44,(vlSelf->SimTop__DOT__u_cpu__DOT__inst),32);
    tracep->fullBit(oldp+45,(vlSelf->SimTop__DOT__u_cpu__DOT__fetched));
    tracep->fullBit(oldp+46,(vlSelf->SimTop__DOT__u_cpu__DOT__Id_stage__DOT__inst_addi));
    tracep->fullCData(oldp+47,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst)),7);
    tracep->fullCData(oldp+48,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+49,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+50,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                         >> 0xfU))),5);
    tracep->fullSData(oldp+51,((vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+52,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[0]),64);
    tracep->fullQData(oldp+54,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[1]),64);
    tracep->fullQData(oldp+56,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[2]),64);
    tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[3]),64);
    tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[4]),64);
    tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[5]),64);
    tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[6]),64);
    tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[7]),64);
    tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[8]),64);
    tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[9]),64);
    tracep->fullQData(oldp+72,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[10]),64);
    tracep->fullQData(oldp+74,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[11]),64);
    tracep->fullQData(oldp+76,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[12]),64);
    tracep->fullQData(oldp+78,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[13]),64);
    tracep->fullQData(oldp+80,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[14]),64);
    tracep->fullQData(oldp+82,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[15]),64);
    tracep->fullQData(oldp+84,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[16]),64);
    tracep->fullQData(oldp+86,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[17]),64);
    tracep->fullQData(oldp+88,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[18]),64);
    tracep->fullQData(oldp+90,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[19]),64);
    tracep->fullQData(oldp+92,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[20]),64);
    tracep->fullQData(oldp+94,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[21]),64);
    tracep->fullQData(oldp+96,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[22]),64);
    tracep->fullQData(oldp+98,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[23]),64);
    tracep->fullQData(oldp+100,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[24]),64);
    tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[25]),64);
    tracep->fullQData(oldp+104,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[26]),64);
    tracep->fullQData(oldp+106,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[27]),64);
    tracep->fullQData(oldp+108,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[28]),64);
    tracep->fullQData(oldp+110,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[29]),64);
    tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[30]),64);
    tracep->fullQData(oldp+114,(vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs[31]),64);
    tracep->fullBit(oldp+116,((((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__len) 
                                != (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_len)) 
                               & ((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__w_hs) 
                                  | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs)))));
    tracep->fullBit(oldp+117,(((IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done) 
                               | (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__rw_ready))));
    tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[0]),64);
    tracep->fullQData(oldp+120,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[1]),64);
    tracep->fullQData(oldp+122,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[2]),64);
    tracep->fullQData(oldp+124,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[3]),64);
    tracep->fullQData(oldp+126,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[4]),64);
    tracep->fullQData(oldp+128,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[5]),64);
    tracep->fullQData(oldp+130,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[6]),64);
    tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[7]),64);
    tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[8]),64);
    tracep->fullQData(oldp+136,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[9]),64);
    tracep->fullQData(oldp+138,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[10]),64);
    tracep->fullQData(oldp+140,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[11]),64);
    tracep->fullQData(oldp+142,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[12]),64);
    tracep->fullQData(oldp+144,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[13]),64);
    tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[14]),64);
    tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[15]),64);
    tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[16]),64);
    tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[17]),64);
    tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[18]),64);
    tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[19]),64);
    tracep->fullQData(oldp+158,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[20]),64);
    tracep->fullQData(oldp+160,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[21]),64);
    tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[22]),64);
    tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[23]),64);
    tracep->fullQData(oldp+166,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[24]),64);
    tracep->fullQData(oldp+168,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[25]),64);
    tracep->fullQData(oldp+170,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[26]),64);
    tracep->fullQData(oldp+172,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[27]),64);
    tracep->fullQData(oldp+174,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[28]),64);
    tracep->fullQData(oldp+176,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[29]),64);
    tracep->fullQData(oldp+178,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[30]),64);
    tracep->fullQData(oldp+180,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__Regfile__regs_o[31]),64);
    tracep->fullBit(oldp+182,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
    tracep->fullCData(oldp+183,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
    tracep->fullQData(oldp+184,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
    tracep->fullQData(oldp+186,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
    tracep->fullIData(oldp+188,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
    tracep->fullBit(oldp+189,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
    tracep->fullBit(oldp+190,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
    tracep->fullCData(oldp+191,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
    tracep->fullQData(oldp+192,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
    tracep->fullQData(oldp+194,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
    tracep->fullQData(oldp+196,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
    tracep->fullQData(oldp+198,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
    tracep->fullQData(oldp+200,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
    tracep->fullQData(oldp+202,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
    tracep->fullQData(oldp+204,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
    tracep->fullQData(oldp+206,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
    tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
    tracep->fullQData(oldp+210,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
    tracep->fullQData(oldp+212,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
    tracep->fullQData(oldp+214,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
    tracep->fullQData(oldp+216,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
    tracep->fullQData(oldp+218,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
    tracep->fullQData(oldp+220,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
    tracep->fullQData(oldp+222,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
    tracep->fullQData(oldp+224,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
    tracep->fullQData(oldp+226,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
    tracep->fullQData(oldp+228,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
    tracep->fullQData(oldp+230,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
    tracep->fullQData(oldp+232,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
    tracep->fullQData(oldp+234,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
    tracep->fullQData(oldp+236,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
    tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
    tracep->fullQData(oldp+240,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
    tracep->fullQData(oldp+242,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
    tracep->fullQData(oldp+244,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
    tracep->fullQData(oldp+246,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
    tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
    tracep->fullQData(oldp+250,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
    tracep->fullQData(oldp+252,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
    tracep->fullQData(oldp+254,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
    tracep->fullQData(oldp+256,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
    tracep->fullQData(oldp+258,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
    tracep->fullQData(oldp+260,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0U]),64);
    tracep->fullQData(oldp+262,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [1U]),64);
    tracep->fullQData(oldp+264,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [2U]),64);
    tracep->fullQData(oldp+266,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [3U]),64);
    tracep->fullQData(oldp+268,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [4U]),64);
    tracep->fullQData(oldp+270,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [5U]),64);
    tracep->fullQData(oldp+272,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [6U]),64);
    tracep->fullQData(oldp+274,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [7U]),64);
    tracep->fullQData(oldp+276,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [8U]),64);
    tracep->fullQData(oldp+278,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [9U]),64);
    tracep->fullQData(oldp+280,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0xaU]),64);
    tracep->fullQData(oldp+282,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0xbU]),64);
    tracep->fullQData(oldp+284,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0xcU]),64);
    tracep->fullQData(oldp+286,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0xdU]),64);
    tracep->fullQData(oldp+288,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0xeU]),64);
    tracep->fullQData(oldp+290,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0xfU]),64);
    tracep->fullQData(oldp+292,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x10U]),64);
    tracep->fullQData(oldp+294,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x11U]),64);
    tracep->fullQData(oldp+296,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x12U]),64);
    tracep->fullQData(oldp+298,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x13U]),64);
    tracep->fullQData(oldp+300,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x14U]),64);
    tracep->fullQData(oldp+302,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x15U]),64);
    tracep->fullQData(oldp+304,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x16U]),64);
    tracep->fullQData(oldp+306,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x17U]),64);
    tracep->fullQData(oldp+308,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x18U]),64);
    tracep->fullQData(oldp+310,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x19U]),64);
    tracep->fullQData(oldp+312,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x1aU]),64);
    tracep->fullQData(oldp+314,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x1bU]),64);
    tracep->fullQData(oldp+316,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x1cU]),64);
    tracep->fullQData(oldp+318,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x1dU]),64);
    tracep->fullQData(oldp+320,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x1eU]),64);
    tracep->fullQData(oldp+322,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                [0x1fU]),64);
    tracep->fullCData(oldp+324,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
    tracep->fullBit(oldp+325,(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_hs));
    tracep->fullBit(oldp+326,(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_done));
    tracep->fullQData(oldp+327,(vlSelf->SimTop__DOT__u_axi_rw__DOT__axi_r_data_l),64);
    tracep->fullBit(oldp+329,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_ena));
    tracep->fullCData(oldp+330,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_w_addr),5);
    tracep->fullCData(oldp+331,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type),5);
    tracep->fullCData(oldp+332,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_opcode),8);
    tracep->fullQData(oldp+333,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[0]),64);
    tracep->fullQData(oldp+335,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[1]),64);
    tracep->fullQData(oldp+337,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[2]),64);
    tracep->fullQData(oldp+339,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[3]),64);
    tracep->fullQData(oldp+341,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[4]),64);
    tracep->fullQData(oldp+343,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[5]),64);
    tracep->fullQData(oldp+345,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[6]),64);
    tracep->fullQData(oldp+347,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[7]),64);
    tracep->fullQData(oldp+349,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[8]),64);
    tracep->fullQData(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[9]),64);
    tracep->fullQData(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[10]),64);
    tracep->fullQData(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[11]),64);
    tracep->fullQData(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[12]),64);
    tracep->fullQData(oldp+359,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[13]),64);
    tracep->fullQData(oldp+361,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[14]),64);
    tracep->fullQData(oldp+363,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[15]),64);
    tracep->fullQData(oldp+365,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[16]),64);
    tracep->fullQData(oldp+367,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[17]),64);
    tracep->fullQData(oldp+369,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[18]),64);
    tracep->fullQData(oldp+371,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[19]),64);
    tracep->fullQData(oldp+373,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[20]),64);
    tracep->fullQData(oldp+375,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[21]),64);
    tracep->fullQData(oldp+377,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[22]),64);
    tracep->fullQData(oldp+379,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[23]),64);
    tracep->fullQData(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[24]),64);
    tracep->fullQData(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[25]),64);
    tracep->fullQData(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[26]),64);
    tracep->fullQData(oldp+387,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[27]),64);
    tracep->fullQData(oldp+389,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[28]),64);
    tracep->fullQData(oldp+391,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[29]),64);
    tracep->fullQData(oldp+393,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[30]),64);
    tracep->fullQData(oldp+395,(vlSelf->SimTop__DOT__u_cpu__DOT__regs[31]),64);
    tracep->fullQData(oldp+397,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_data),64);
    tracep->fullBit(oldp+399,(vlSelf->clock));
    tracep->fullBit(oldp+400,(vlSelf->reset));
    tracep->fullQData(oldp+401,(vlSelf->io_logCtrl_log_begin),64);
    tracep->fullQData(oldp+403,(vlSelf->io_logCtrl_log_end),64);
    tracep->fullQData(oldp+405,(vlSelf->io_logCtrl_log_level),64);
    tracep->fullBit(oldp+407,(vlSelf->io_perfInfo_clean));
    tracep->fullBit(oldp+408,(vlSelf->io_perfInfo_dump));
    tracep->fullBit(oldp+409,(vlSelf->io_uart_out_valid));
    tracep->fullCData(oldp+410,(vlSelf->io_uart_out_ch),8);
    tracep->fullBit(oldp+411,(vlSelf->io_uart_in_valid));
    tracep->fullCData(oldp+412,(vlSelf->io_uart_in_ch),8);
    tracep->fullBit(oldp+413,(vlSelf->io_memAXI_0_aw_ready));
    tracep->fullBit(oldp+414,(vlSelf->io_memAXI_0_aw_valid));
    tracep->fullQData(oldp+415,(vlSelf->io_memAXI_0_aw_bits_addr),64);
    tracep->fullCData(oldp+417,(vlSelf->io_memAXI_0_aw_bits_prot),3);
    tracep->fullCData(oldp+418,(vlSelf->io_memAXI_0_aw_bits_id),4);
    tracep->fullBit(oldp+419,(vlSelf->io_memAXI_0_aw_bits_user));
    tracep->fullCData(oldp+420,(vlSelf->io_memAXI_0_aw_bits_len),8);
    tracep->fullCData(oldp+421,(vlSelf->io_memAXI_0_aw_bits_size),3);
    tracep->fullCData(oldp+422,(vlSelf->io_memAXI_0_aw_bits_burst),2);
    tracep->fullBit(oldp+423,(vlSelf->io_memAXI_0_aw_bits_lock));
    tracep->fullCData(oldp+424,(vlSelf->io_memAXI_0_aw_bits_cache),4);
    tracep->fullCData(oldp+425,(vlSelf->io_memAXI_0_aw_bits_qos),4);
    tracep->fullBit(oldp+426,(vlSelf->io_memAXI_0_w_ready));
    tracep->fullBit(oldp+427,(vlSelf->io_memAXI_0_w_valid));
    tracep->fullQData(oldp+428,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
    tracep->fullQData(oldp+430,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
    tracep->fullQData(oldp+432,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
    tracep->fullQData(oldp+434,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
    tracep->fullCData(oldp+436,(vlSelf->io_memAXI_0_w_bits_strb),8);
    tracep->fullBit(oldp+437,(vlSelf->io_memAXI_0_w_bits_last));
    tracep->fullBit(oldp+438,(vlSelf->io_memAXI_0_b_ready));
    tracep->fullBit(oldp+439,(vlSelf->io_memAXI_0_b_valid));
    tracep->fullCData(oldp+440,(vlSelf->io_memAXI_0_b_bits_resp),2);
    tracep->fullCData(oldp+441,(vlSelf->io_memAXI_0_b_bits_id),4);
    tracep->fullBit(oldp+442,(vlSelf->io_memAXI_0_b_bits_user));
    tracep->fullBit(oldp+443,(vlSelf->io_memAXI_0_ar_ready));
    tracep->fullBit(oldp+444,(vlSelf->io_memAXI_0_ar_valid));
    tracep->fullQData(oldp+445,(vlSelf->io_memAXI_0_ar_bits_addr),64);
    tracep->fullCData(oldp+447,(vlSelf->io_memAXI_0_ar_bits_prot),3);
    tracep->fullCData(oldp+448,(vlSelf->io_memAXI_0_ar_bits_id),4);
    tracep->fullBit(oldp+449,(vlSelf->io_memAXI_0_ar_bits_user));
    tracep->fullCData(oldp+450,(vlSelf->io_memAXI_0_ar_bits_len),8);
    tracep->fullCData(oldp+451,(vlSelf->io_memAXI_0_ar_bits_size),3);
    tracep->fullCData(oldp+452,(vlSelf->io_memAXI_0_ar_bits_burst),2);
    tracep->fullBit(oldp+453,(vlSelf->io_memAXI_0_ar_bits_lock));
    tracep->fullCData(oldp+454,(vlSelf->io_memAXI_0_ar_bits_cache),4);
    tracep->fullCData(oldp+455,(vlSelf->io_memAXI_0_ar_bits_qos),4);
    tracep->fullBit(oldp+456,(vlSelf->io_memAXI_0_r_ready));
    tracep->fullBit(oldp+457,(vlSelf->io_memAXI_0_r_valid));
    tracep->fullCData(oldp+458,(vlSelf->io_memAXI_0_r_bits_resp),2);
    tracep->fullQData(oldp+459,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
    tracep->fullQData(oldp+461,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
    tracep->fullQData(oldp+463,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
    tracep->fullQData(oldp+465,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
    tracep->fullBit(oldp+467,(vlSelf->io_memAXI_0_r_bits_last));
    tracep->fullCData(oldp+468,(vlSelf->io_memAXI_0_r_bits_id),4);
    tracep->fullBit(oldp+469,(vlSelf->io_memAXI_0_r_bits_user));
    tracep->fullQData(oldp+470,(vlSelf->io_memAXI_0_r_bits_data
                                [0U]),64);
    tracep->fullBit(oldp+472,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                               & (1U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)))));
    tracep->fullBit(oldp+473,(((IData)(vlSelf->reset) 
                               | (0U == (IData)(vlSelf->SimTop__DOT__u_axi_rw__DOT__r_state)))));
    tracep->fullBit(oldp+474,((1U & (IData)(vlSelf->io_memAXI_0_r_bits_resp))));
    __Vtemp_hcf47a88b__3[0U] = 0xffffffffU;
    __Vtemp_hcf47a88b__3[1U] = 0U;
    __Vtemp_hcf47a88b__3[2U] = 0U;
    __Vtemp_hcf47a88b__3[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__11, vlSelf->SimTop__DOT__if_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp_hab772c2a__0, __Vtemp_hcf47a88b__3, 
                  (0x38U & (__Vtemp_hae6f3975__11[0U] 
                            << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp_hae6f3975__12, vlSelf->SimTop__DOT__if_addr);
    tracep->fullQData(oldp+475,(((vlSelf->io_memAXI_0_r_bits_data
                                  [0U] & (((QData)((IData)(
                                                           __Vtemp_hab772c2a__0[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_hab772c2a__0[2U])))) 
                                 << (0x3fU & (- (0x38U 
                                                 & (__Vtemp_hae6f3975__12[0U] 
                                                    << 3U)))))),64);
    tracep->fullBit(oldp+477,(((IData)(vlSelf->reset)
                                ? 0U : (1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                              >> 4U)))));
    tracep->fullCData(oldp+478,(((IData)(vlSelf->reset)
                                  ? 0U : ((0x10U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                           ? (0x1fU 
                                              & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                 >> 0xfU))
                                           : 0U))),5);
    tracep->fullQData(oldp+479,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x10U 
                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                             ? ((IData)(vlSelf->reset)
                                                 ? 0ULL
                                                 : 
                                                (((IData)(vlSelf->reset)
                                                   ? 0U
                                                   : 
                                                  (1U 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                                      >> 4U)))
                                                  ? 
                                                 vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
                                                 [((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                        >> 0xfU))
                                                     : 0U))]
                                                  : 0ULL))
                                             : 0ULL))),64);
    tracep->fullQData(oldp+481,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x10U 
                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                                   >> 0x14U))))
                                             : 0ULL))),64);
    tracep->fullQData(oldp+483,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((IData)(vlSelf->reset)
                                              ? 0U : 
                                             (1U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type) 
                                               >> 4U)))
                                             ? vlSelf->SimTop__DOT__u_cpu__DOT__Regfile__DOT__regs
                                            [((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((0x10U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_type))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst 
                                                      >> 0xfU))
                                                   : 0U))]
                                             : 0ULL))),64);
    tracep->fullBit(oldp+485,(vlSelf->SimTop__DOT__aw_ready));
    tracep->fullBit(oldp+486,(vlSelf->SimTop__DOT__aw_valid));
    tracep->fullQData(oldp+487,(vlSelf->SimTop__DOT__aw_addr),64);
    tracep->fullCData(oldp+489,(vlSelf->SimTop__DOT__aw_prot),3);
    tracep->fullCData(oldp+490,(vlSelf->SimTop__DOT__aw_id),4);
    tracep->fullBit(oldp+491,(vlSelf->SimTop__DOT__aw_user));
    tracep->fullCData(oldp+492,(vlSelf->SimTop__DOT__aw_len),8);
    tracep->fullCData(oldp+493,(vlSelf->SimTop__DOT__aw_size),3);
    tracep->fullCData(oldp+494,(vlSelf->SimTop__DOT__aw_burst),2);
    tracep->fullBit(oldp+495,(vlSelf->SimTop__DOT__aw_lock));
    tracep->fullCData(oldp+496,(vlSelf->SimTop__DOT__aw_cache),4);
    tracep->fullCData(oldp+497,(vlSelf->SimTop__DOT__aw_qos),4);
    tracep->fullCData(oldp+498,(vlSelf->SimTop__DOT__aw_region),4);
    tracep->fullBit(oldp+499,(vlSelf->SimTop__DOT__w_ready));
    tracep->fullBit(oldp+500,(vlSelf->SimTop__DOT__w_valid));
    tracep->fullQData(oldp+501,(vlSelf->SimTop__DOT__w_data),64);
    tracep->fullCData(oldp+503,(vlSelf->SimTop__DOT__w_strb),8);
    tracep->fullBit(oldp+504,(vlSelf->SimTop__DOT__w_last));
    tracep->fullBit(oldp+505,(vlSelf->SimTop__DOT__w_user));
    tracep->fullBit(oldp+506,(vlSelf->SimTop__DOT__b_ready));
    tracep->fullBit(oldp+507,(vlSelf->SimTop__DOT__b_valid));
    tracep->fullCData(oldp+508,(vlSelf->SimTop__DOT__b_resp),2);
    tracep->fullCData(oldp+509,(vlSelf->SimTop__DOT__b_id),4);
    tracep->fullBit(oldp+510,(vlSelf->SimTop__DOT__b_user));
    tracep->fullCData(oldp+511,(0U),3);
    tracep->fullCData(oldp+512,(0U),4);
    tracep->fullBit(oldp+513,(0U));
    tracep->fullCData(oldp+514,(3U),3);
    tracep->fullCData(oldp+515,(1U),2);
    tracep->fullBit(oldp+516,(0U));
    tracep->fullCData(oldp+517,(2U),4);
    tracep->fullCData(oldp+518,(vlSelf->SimTop__DOT__ar_region),4);
    tracep->fullBit(oldp+519,(1U));
    tracep->fullQData(oldp+520,(vlSelf->SimTop__DOT__data_write),64);
    tracep->fullCData(oldp+522,(2U),2);
    tracep->fullIData(oldp+523,(0x40U),32);
    tracep->fullIData(oldp+524,(4U),32);
    tracep->fullIData(oldp+525,(1U),32);
    VL_EXTEND_WQ(65,64, __Vtemp_h94883541__0, vlSelf->SimTop__DOT__data_write);
    tracep->fullWData(oldp+526,(__Vtemp_h94883541__0),65);
    tracep->fullBit(oldp+529,(((IData)(vlSelf->SimTop__DOT__aw_ready) 
                               & (IData)(vlSelf->SimTop__DOT__aw_valid))));
    tracep->fullBit(oldp+530,(((IData)(vlSelf->SimTop__DOT__b_ready) 
                               & (IData)(vlSelf->SimTop__DOT__b_valid))));
    tracep->fullCData(oldp+531,(0U),2);
    tracep->fullCData(oldp+532,(3U),2);
    tracep->fullIData(oldp+533,(3U),32);
    tracep->fullIData(oldp+534,(6U),32);
    tracep->fullIData(oldp+535,(0x80U),32);
    tracep->fullIData(oldp+536,(0U),32);
    tracep->fullCData(oldp+537,(3U),4);
    tracep->fullCData(oldp+538,(0U),5);
    tracep->fullQData(oldp+539,(0ULL),64);
    tracep->fullCData(oldp+541,(0U),8);
    tracep->fullQData(oldp+542,(vlSelf->SimTop__DOT__u_cpu__DOT__If_stage__DOT__addr),64);
}
