.PHONY: clean All

All:
	@echo "----------Building project:[ RectangularMethod - Debug ]----------"
	@cd "RectangularMethod" && "$(MAKE)" -f  "RectangularMethod.mk"
clean:
	@echo "----------Cleaning project:[ RectangularMethod - Debug ]----------"
	@cd "RectangularMethod" && "$(MAKE)" -f  "RectangularMethod.mk" clean
