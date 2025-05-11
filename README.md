# Smart Contract Ultra

Ce projet contient un smart contract pour la blockchain Ultra.

## Prérequis

### Extensions VSCode nécessaires
1. **Ultra Smart Contract Toolkit**
   - Cette extension est essentielle pour le développement de smart contracts Ultra
   - Installation : 
     1. Ouvrir VSCode
     2. Aller dans l'onglet Extensions (Ctrl+Shift+X)
     3. Rechercher "Ultra Smart Contract Toolkit"
     4. Cliquer sur Installer

2. **Extensions C++ requises**
   - C/C++ (Microsoft)
   - C/C++ Extension Pack
   - CMake Tools
   - CMake

### Installation des extensions C++
1. Ouvrir VSCode
2. Aller dans l'onglet Extensions (Ctrl+Shift+X)
3. Rechercher et installer les extensions suivantes :
   - "C/C++" par Microsoft
   - "C/C++ Themes" par Microsoft
   - "C/C++ Extension Pack" par Microsoft
   - "CMake Tools" par Microsoft

### Installation de Docker et de l'image Ultra
1. **Installation de Docker**
   - Télécharger et installer Docker Desktop depuis [le site officiel de Docker](https://www.docker.com/products/docker-desktop)
   - Suivre les instructions d'installation pour votre système d'exploitation

2. **Téléchargement de l'image Ultra**
   ```bash
   docker pull quay.io/ultra.io/3rdparty-devtools:latest
   ```

3. **Démarrage du conteneur Ultra**
   - Pour Windows :
   ```bash
   docker run -d --name ultra -p 8888:8888 -p 9876:9876 -v C:\Users\<Username>\ultra_workdir:/opt/ultra_workdir quay.io/ultra.io/3rdparty-devtools:latest
   ```
   - Pour Linux/macOS :
   ```bash
   docker run -d --name ultra -p 8888:8888 -p 9876:9876 -v ~/ultra_workdir:/opt/ultra_workdir quay.io/ultra.io/3rdparty-devtools:latest
   ```

4. **Accès au conteneur**
   ```bash
   docker start ultra && docker exec -it ultra /bin/bash
   ```

## Configuration du Wallet

### Création du Wallet
1. Ouvrir VSCode
2. Appuyer sur `Ctrl+Shift+P` pour ouvrir la palette de commandes
3. Taper "Ultra: Create Wallet" pour importer un wallet existant
4. Suivre les instructions à l'écran

### Obtention de RAM
La RAM est essentielle pour le déploiement des smart contracts sur Ultra. Elle est utilisée pour stocker les données et l'état des contrats sur la blockchain.

1. Se connecter à [Ultra Wallet](https://developers.ultra.io/tutorials/guides/how-to-get-ram#purchase-ram)
2. S'assurer que le wallet est configuré sur le `Testnet`
3. Utiliser le formulaire sur la page pour acheter de la RAM
4. Confirmer la transaction dans le wallet
5. Réitérer l'opération jusqu'à ce que la RAM soit suffisante

## Déploiement sur le Testnet

### Déploiement
1. Appuyer sur `Ctrl+Shift+P`
2. Taper "Ultra: Deploy Contract"
3. Sélectionner le compte de déploiement
4. Attendre la confirmation du déploiement

## Structure du Projet
```
.
├── .vscode/       # Configuration VSCode
├── src/           # Code source du smart contract
├── lib/           # Bibliothèques externes
```

## Commandes Utiles

### Build
```bash
# Dans VSCode
Ctrl+Shift+P -> Ultra: Build Contract
```

### Déploiement
```bash
# Dans VSCode
Ctrl+Shift+P -> Ultra: Deploy Contract
```

### Créer une transaction
```bash
# Dans VSCode
Ctrl+Shift+P -> Ultra: Create Transaction
```

## Dépannage

### Problèmes courants
1. **"Could not create signable API. Wrong password? Bad endpoint?"**
   - Vérifier que le wallet est bien créé et déverrouillé
   - Vérifier que l'extension Ultra est bien installée
   - Redémarrer VSCode si nécessaire

2. **Erreurs de build**
   - Vérifier que toutes les extensions C++ sont installées
   - Vérifier les toasts d'erreur et leslogs de build dans la console VSCode

### Support
Pour plus d'aide :
- Consulter la [documentation Ultra](https://developers.ultra.io/)
- Ouvrir une issue sur ce repository