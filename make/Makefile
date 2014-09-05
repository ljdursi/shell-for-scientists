datafiles = data_*txt

histogram.txt: histdata.dat texthistogram
	./texthistogram < histdata.dat > histogram.txt

histdata.dat: $(datafiles)
	grep -h Volume $^ | sort -n -k 2 | uniq -c > $@

texthistogram: texthistogram.c
	gcc -o texthistogram texthistogram.c -Wall -std=c99

clean:
	rm -f texthistogram histdata.dat histogram.txt	
