
LANG_TEST_SRC=$(wildcard lang/*.str)

LANG_TEST_CTREE=$(patsubst lang/%.str,data/%.ctree,$(LANG_TEST_SRC))
LANG_TEST_JAVA=$(patsubst lang/%.str,../java/org/strategoxt/compiler/tests/cases/%.java,$(LANG_TEST_SRC))

all: $(LANG_TEST_CTREE) $(LANG_TEST_JAVA)

data/%.ctree : lang/%.str
	strc -i $< -F | baffle -wt -o $@

../java/org/strategoxt/compiler/tests/cases/%.java : data/%.ctree
	../../str/s2j -i $< | pp-java -o $@
