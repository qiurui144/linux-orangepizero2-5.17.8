// SPDX-License-Identifier: GPL-2.0+
/*
 *  Pvpanic Device Support
 *
 *  Copyright (C) 2021 Oracle.
 */

#ifndef PVPANIC_H_
#define PVPANIC_H_

struct pvpanic_instance {
	void __iomem *base;
	unsigned int capability;
	unsigned int events;
	struct list_head list;
};

int devm_pvpanic_probe(struct device *dev, struct pvpanic_instance *pi);

#endif /* PVPANIC_H_ */
