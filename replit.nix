{ pkgs }: {
  deps = [
    pkgs.nodejs-18_x  # Specify the Node.js version
    pkgs.yarn         # Optionally include yarn if you prefer to use it
  ];
}