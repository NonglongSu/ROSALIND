default: all 
all: $(SOURCES) $(EXECUTABLE) $(DATA) print clean

.PHONY: print clean

$(EXECUTABLE): $(SOURCES) 	
	$(CXX) -o $@ $< $(CFlags) 

print:
	./$(EXECUTABLE) $(DATA)

clean: 
	@rm -f $(EXECUTABLE) 

