#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h>
#include "choice.h"
#include "aterm-extension.h"

#define PushChoice() localSetChoicePoint()
#define PopChoice() --stack_ptr
#define LocalPopChoice(i) removeChoicePoint(i)

#define GlobalPushChoice() setChoicePoint()
