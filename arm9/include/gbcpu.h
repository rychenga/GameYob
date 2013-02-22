#pragma once
#include "global.h"

#define GB			0
#define CGB			1

// If defined, store everything the gameboy does in a log file.
// This is insanely slow and makes a huge file, but it works...
//#define LOG

typedef union
{
	u16 w;
	struct B
	{
		u8 l;
		u8 h;
	} b;
} Register;


//extern Register af,bc,de,hl;
extern u16 gbSP,gbPC;
extern int fps;
extern int halt;
extern int ime;
extern int interruptTriggered;
extern int gbMode;
extern char opcodeList[0x100][50];
extern char CBopcodeList[0x100][100];
extern int totalCycles;

void initCPU();
void enableInterrupts();
void disableInterrupts();
void handleInterrupts();
int runOpcode(int cycles);

/*inline void setZFlag();
inline void clearZFlag();
inline void setNFlag();
inline void clearNFlag();
inline void setHFlag();
inline void clearHFlag();
inline void setCFlag();
inline void clearCFlag();
inline ui carrySet();
inline ui zeroSet();
inline ui halfSet();
inline ui negativeSet();*/

	
	void nop();
	void ld_bc_nn();
	void ld_bc_a();
	void inc_bc();
	void inc_b();
	void dec_b();
	void ld_b_n();
	void rlca();
	void ld_nn_sp();
	void add_hl_bc();
	void ld_a_bc();
	void dec_bc();
	void inc_c();
	void dec_c();
	void ld_c_n();
	void rrca();
	void stop();
	void ld_de_nn();
	void ld_de_a();
	void inc_de();
	void inc_d();
	void dec_d();
	void ld_d_n();
	void rla();
	void jr();
	void add_hl_de();
	void ld_a_de();
	void dec_de();
	void inc_e();
	void dec_e();
	void ld_e_n();
	void rra();
	void jr_nz();
	void ld_hl_nn();
	void ldi_hl_a();
	void inc_hl();
	void inc_h();
	void dec_h();
	void ld_h_n();
	void daa();
	void jr_z();
	void add_hl_hl();
	void ldi_a_hl();
	void dec_hl();
	void inc_l();
	void dec_l();
	void ld_l_n();
	void cpl();
	void jr_nc();
	void ld_sp_nn();
	void ldd_hl_a();
	void inc_sp();
	void inc_at_hl();
	void dec_at_hl();
	void ld_hl_n();
	void scf();
	void jr_c();
	void add_hl_sp();
	void ldd_a_hl();
	void dec_sp();
	void inc_a();
	void dec_a();
	void ld_a_n();
	void ccf();
	void ld_b_b();
	void ld_b_c();
	void ld_b_d();
	void ld_b_e();
	void ld_b_h();
	void ld_b_l();
void ld_b_hl();
void ld_b_a();
void ld_c_b();
void ld_c_c();
void ld_c_d();
void ld_c_e();
void ld_c_h();
void ld_c_l();
void ld_c_hl();
void ld_c_a();
void ld_d_b();
void ld_d_c();
void ld_d_d();
void ld_d_e();
void ld_d_h();
void ld_d_l();
void ld_d_hl();
void ld_d_a();
void ld_e_b();
void ld_e_c();
void ld_e_d();
void ld_e_e();
void ld_e_h();
void ld_e_l();
void ld_e_hl();
void ld_e_a();
void ld_h_b();
void ld_h_c();
void ld_h_d();
void ld_h_e();
void ld_h_h();
void ld_h_l();
void ld_h_hl();
void ld_h_a();
void ld_l_b();
void ld_l_c();
void ld_l_d();
void ld_l_e();
void ld_l_h();
void ld_l_l();
void ld_l_hl();
void ld_l_a();
void ld_hl_b();
void ld_hl_c();
void ld_hl_d();
void ld_hl_e();
void ld_hl_h();
void ld_hl_l();
void haltcpu();
void ld_hl_a();
void ld_a_b();
void ld_a_c();
void ld_a_d();
void ld_a_e();
void ld_a_h();
void ld_a_l();
void ld_a_hl();
void ld_a_a();
void add_a_b();
void add_a_c();
void add_a_d();
void add_a_e();
void add_a_h();
void add_a_l();
void add_a_hl();
void add_a_a();
void adc_a_b();
void adc_a_c();
void adc_a_d();
void adc_a_e();
void adc_a_h();
void adc_a_l();
void adc_a_hl();
void adc_a_a();
void sub_a_b();
void sub_a_c();
void sub_a_d();
void sub_a_e();
void sub_a_h();
void sub_a_l();
void sub_a_hl();
void sub_a_a();
void sbc_a_b();
void sbc_a_c();
void sbc_a_d();
void sbc_a_e();
void sbc_a_h();
void sbc_a_l();
void sbc_a_hl();
void sbc_a_a();
void and_b();
void and_c();
void and_d();
void and_e();
void and_h();
void and_l();
void and_hl();
void and_a();
void xor_b();
void xor_c();
void xor_d();
void xor_e();
void xor_h();
void xor_l();
void xor_hl();
void xor_a();
void or_b();
void or_c();
void or_d();
void or_e();
void or_h();
void or_l();
void or_hl();
void or_a();
void cp_b();
void cp_c();
void cp_d();
void cp_e();
void cp_h();
void cp_l();
void cp_hl();
void cp_a();
void ret_nz();
void pop_bc();
void jp_nz();
void jp();
void call_nz();
void push_bc();
void add_a_n();
void rst_00();
void ret_z();
void ret();
void jp_z();
void cb_op();
void call_z();
void call();
void adc_a_n();
void rst_08();
void ret_nc();
void pop_de();
void jp_nc();
void call_nc();
void push_de();
void sub_a_n();
void rst_10();
void ret_c();
void reti();
void jp_c();
void call_c();
void sbc_a_n();
void rst_18();
void ldh_n_a();
void pop_hl();
void ld_C_a();
void push_hl();
void and_n();
void rst_20();
void add_sp_n();
void jp_hl();
void ld_nn_a();
void xor_n();
void rst_28();
void ldh_a_n();
void pop_af();
void ld_a_C();
void di();
void push_af();
void or_n();
void rst_30();
void ldhl_sp_n();
void ld_sp_hl();
void ld_a_nn();
void ei();
void cp_n();
void rst_38();
