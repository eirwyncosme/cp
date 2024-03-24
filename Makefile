SUBDIR_ROOTS := atcoder usaco ut codeforces poj
DIRS := . $(shell find $(SUBDIR_ROOTS) -type d)
GARBAGE_PATTERNS := *.in *.out e E
GARBAGE := $(foreach DIR,$(DIRS),$(addprefix $(DIR)/,$(GARBAGE_PATTERNS)))

clean:
	@rm -rf $(GARBAGE)
