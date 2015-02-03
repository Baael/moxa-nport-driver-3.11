#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xaf605240, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9e0b3055, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8c9730e1, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xe3786139, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x819c43f1, __VMLINUX_SYMBOL_STR(tty_port_link_device) },
	{ 0x124b7484, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x2bc95bd4, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3cd68b17, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x2cf54446, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x99b0cbd5, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x86c8071b, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x203d298, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6d5601af, __VMLINUX_SYMBOL_STR(tty_check_change) },
	{ 0x3a013b7d, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd7bd3af2, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xf84e3c7c, __VMLINUX_SYMBOL_STR(tty_wait_until_sent) },
	{ 0x7e358e3a, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xda3bbb4, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0x7685ff05, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe6b3fe21, __VMLINUX_SYMBOL_STR(interruptible_sleep_on_timeout) },
	{ 0x95fde3d, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x69787660, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xea394c1, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x5fa78f99, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2e60bace, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2f287f0d, __VMLINUX_SYMBOL_STR(copy_to_user) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7cd8f954, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb05bc6cd, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xec7a755a, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x576965f1, __VMLINUX_SYMBOL_STR(tty_register_device) },
	{ 0xc4554217, __VMLINUX_SYMBOL_STR(up) },
	{ 0xdd1a2871, __VMLINUX_SYMBOL_STR(down) },
	{ 0xc94229ee, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfb40093e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd5c58784, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3b8e531, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FE3E2DA17538D51059B2658");
