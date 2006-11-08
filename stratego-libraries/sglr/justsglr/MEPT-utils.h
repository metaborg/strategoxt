/* $Id: MEPT-utils.h 19015 2006-06-30 20:54:00Z jurgenv $ */

/** 
 * \mainpage 
 *
 * pt-support contains the definition and implementation of UPTR:
 * A universal parse tree representation and manipulation format. 
 *
 * UPTR is constructed from:
 *    - An abstract representation of productions.
 *    - Tree and forest construction nodes (with productions in each node).
 *    - ASCII character values as leafs.
 *
 * \section Usage Usage
 *
 * SGLR produces parse trees using \ref MEPT.h "MEPT.h". You can use the 
 * API to traverse these trees. The API can also be used to produce trees
 * that look exactly like they have been constructed by SGLR. Tools that
 * use this API are rewriters, structure editors, parse tree visualizers,
 * fact extractors, etc.
 *
 * \section Files Important files
 *    - \ref MEPT.h 
 *    - \ref MEPT-utils.h 
 *    - \ref PTMEPT.h 
 *    - \ref PTMEPT-utils.h 
 *
 * \section Tools Tools
 *
 * A selected number of functions from both MEPT-utils.h and PTMEPT-utils.h
 * are available as commandline tools, and as ToolBus tools:
 *    - unparsePT: yields the characters of a parse tree
 *    - liftPT: lifts a parse tree to a parse tree of a parse tree, or vice versa
 *    - implodePT: maps a parse tree to a more abstract ATerm (abstract syntax tree)
 *    - addPosInfo: add position annotations to each sub-tree
 *    - ambtracker: prints a report of all ambiguities in a parse forest
 *    - unparseProd: maps the AsFix representation of a production to the SDF presentation.
 *    - applyFunction: construct a new production for a prefix function and 
 *      applies it to a list of parse trees, constructing a new parse tree
 */

#ifndef _ME_PT_H
#define _ME_PT_H

/**
 * \file 
 * Contains all reusable high level operations on parse trees and forests.
 * The mostly used function is PT_yieldTree() for yielding the characters
 * of a parse tree to a string.
 *
 */

#include <MEPT-start.h>
#include <MEPT-productions.h>
#include <MEPT-args.h>
#include <MEPT-symbols.h>
#include <MEPT-yieldprod.h>
#include <MEPT-ambtracker.h>
#include <MEPT-flatten.h>
#include <MEPT-implode.h>
#include <MEPT-visitors.h>
#include <MEPT-posinfo.h>
#include <MEPT-annotations.h>
#include <MEPT-length.h>
#include <MEPT-renaming.h>
#include <MEPT-yield.h>
#include <MEPT-characters.h>
#include <MEPT-ordering.h>
#include <MEPT-origins.h>
#include <MEPT-posinfo.h>
#include <MEPT-apply.h>
#include <MEPT-tree.h>
#include <MEPT-layout.h>

#endif /* _ME_PT_H */
