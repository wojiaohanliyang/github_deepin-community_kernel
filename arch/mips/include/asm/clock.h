/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_MIPS_CLOCK_H
#define __ASM_MIPS_CLOCK_H

#include <linux/kref.h>
#include <linux/list.h>
#include <linux/seq_file.h>
#include <linux/clk.h>

struct clk;

struct clk_ops {
	void (*init) (struct clk *clk);
	void (*enable) (struct clk *clk);
	void (*disable) (struct clk *clk);
	void (*recalc) (struct clk *clk);
	int (*set_rate) (struct clk *clk, unsigned long rate, int algo_id);
	long (*round_rate) (struct clk *clk, unsigned long rate);
};

struct clk {
	struct list_head node;
	const char *name;
	int id;
	struct module *owner;

	struct clk *parent;
	struct clk_ops *ops;

	struct kref kref;

	unsigned long rate;
	unsigned long flags;
};

#define CLK_ALWAYS_ENABLED	(1 << 0)
#define CLK_RATE_PROPAGATES	(1 << 1)

int clk_init(void);

int __clk_enable(struct clk *);
void __clk_disable(struct clk *);

void clk_recalc_rate(struct clk *);

int clk_register(struct clk *);
void clk_unregister(struct clk *);

struct clk *gs464_cpu_clk_get(int cpu);
struct clk *gs464_clk_get(struct device *dev, const char *id);
void gs464_propagate_rate(struct clk *clk);
unsigned long gs464_clk_get_rate(struct clk *clk);
int gs464_clk_set_rate(struct clk *clk, unsigned long rate);
long gs464_clk_round_rate(struct clk *clk, unsigned long rate);
int gs464_clock_init(void);

#endif				/* __ASM_MIPS_CLOCK_H */
