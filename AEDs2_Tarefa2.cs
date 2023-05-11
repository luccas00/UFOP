using System;
using System.IO;

namespace Principal
{
	public class AEDs_Tarefa2
	{
		public static void Main(String[] args)
		{
			string desktopPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
			string pathNewFolder = desktopPath + "\\NewFolder";
			string finalPath = pathNewFolder + "\\Folha.txt";
			string logFilePath = desktopPath + "\\LogSaida.txt";

			StreamWriter logWriter = new StreamWriter(logFilePath);
			Console.SetOut(logWriter);

			Console.WriteLine("Inicio da Main");
			Console.WriteLine("Obtendo todos os Diretorios atualmente no Drive C");
			// Get the directories currently on the C drive.
			DirectoryInfo[] diretorio = new DirectoryInfo(@"c:\").GetDirectories();

			try
			{
				// Determine whether the directory exists.
				if (Directory.Exists(pathNewFolder))
				{
					Console.WriteLine("O diretorio ja existe.");
					return;
				}

				// Try to create the directory.
				DirectoryInfo di = Directory.CreateDirectory(pathNewFolder);
				Console.WriteLine("Diretorio criado com sucesso na Area de Trabalho {0}.", Directory.GetCreationTime(pathNewFolder));

				try
				{
					StreamWriter sw = new StreamWriter(finalPath, true);
					Console.WriteLine("Sucesso ao abrir o arquivo");
					Console.WriteLine("Gravando todos os diretorios em C no arquivo .txt");
					foreach (DirectoryInfo d in diretorio)
					{
						sw.WriteLine(d.Name);
						sw.WriteLine(d.FullName);
						sw.WriteLine("- - - - -");
					}
					Console.WriteLine("Fechando o arquivo");
					sw.Close();
				}
				catch (Exception e)
				{
					Console.WriteLine(e.Message);
					throw e;

				}

			}
			catch (Exception e)
			{
				Console.WriteLine("Falha em criar o diretorio: {0}", e.ToString());
			}

			Console.WriteLine("Caminho do arquivo criado: " + finalPath);
            Console.WriteLine("Fim da Main");

			logWriter.Flush();
			logWriter.Close();
			Console.SetOut(Console.Out);

			Console.WriteLine("Arquivo Log criado: " + logFilePath);
		}
	}
}