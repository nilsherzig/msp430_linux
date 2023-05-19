FROM fedora:38
COPY . /msp430_linux
RUN sudo dnf update -y
RUN dnf install 'dnf-command(copr)' -y 
RUN sudo bash /msp430_linux/setup.sh
ENTRYPOINT sudo bash '/msp430_linux/entry.sh'
