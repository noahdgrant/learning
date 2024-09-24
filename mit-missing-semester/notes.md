## Command-line Environments
### SSH
- Key gen `ssh-keygen -o -a 100 -t ed25519 -f ~/.ssh/id_ed25519`
- Copy key to client with `cat .ssh/id_ed25519.pub | ssh foobar@remote 'cat >> ~/.ssh/authorized_keys'`
or `ssh-copy-id -i .ssh/id_ed25519 foobar@remote`
- Copy files over SSH
    - `cat localfile | ssh remote_server tee serverfile`
    - `scp`
    - `rsync`
- `mosh` can be used for a better ssh experience
- `sshfs` can be used to mount a remote folder on your local machine
- look into `ssh-agent` to avoid retyping passphrase every time

