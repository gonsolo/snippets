run: BlaKt.class
	@java BlaKt
BlaKt.class: bla.kt
	@kotlinc bla.kt
.PHONY: run c clean e edit
c: clean
clean:
	@rm -rf BlaKt.class META-INF
e: edit
edit:
	@vi bla.kt
