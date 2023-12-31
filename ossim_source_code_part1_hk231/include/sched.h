#ifndef QUEUE_H
#define QUEUE_H

#ifndef COMMON_H
#include "common.h"
#endif

#ifndef MLQ_SCHED
#define MLQ_SCHED
#define MAX_PRIO 140
#endif


int queue_empty(void);

void init_scheduler(void);

void finish_scheduler(void);

/* Get the next process from ready queue */
struct pcb_t * get_proc(void);

/* Put a process back to run queue */
void put_proc(struct pcb_t * proc);

/* Add a new process to ready queue */
void add_proc(struct pcb_t * proc);

void decrease_slot(struct pcb_t * proc);

void reset_slot();

#endif



